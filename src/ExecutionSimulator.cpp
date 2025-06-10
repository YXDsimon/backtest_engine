#include "ExecutionSimulator.hpp"

std::vector<Trade> ExecutionSimulator::simulate(const std::vector<Order>& orders, const Tick& tick) {
    std::cout << "[ExecutionSimulator] Simulation started." << std::endl;
    std::vector<Trade> trades;
    for (const auto& order : orders) {
        if (order.price == tick.getPrice()) { // Simple matching logic
            trades.push_back({order.symbol, order.side, order.price, order.quantity, tick.getTimestamp()});
            std::cout << "[ExecutionSimulator] Order executed: " << order.symbol << std::endl;
        }
    }
    std::cout << "[ExecutionSimulator] Simulation completed." << std::endl;
    return trades;
} 