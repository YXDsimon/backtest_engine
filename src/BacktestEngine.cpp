#include "BacktestEngine.hpp"
#include <iostream>

BacktestEngine::BacktestEngine() {
    log("BacktestEngine initialized.");
}

void BacktestEngine::addStrategy(std::unique_ptr<Strategy> s) {
    strategies.push_back(std::move(s));
    log("Strategy added.");
}

void BacktestEngine::run(const std::vector<Tick>& ticks) {
    log("Backtest started.");
    for (const auto& tick : ticks) {
        for (auto& strategy : strategies) {
            strategy->onTick(tick);
            auto orders = strategy->generateOrders(tick);
            ExecutionSimulator::simulate(orders, tick);
        }
    }
    log("Backtest completed.");
}