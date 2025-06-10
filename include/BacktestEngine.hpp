#pragma once
#include "Strategy.hpp"
#include "ExecutionSimulator.hpp"
#include <vector>
#include <memory>
#include "Logger.hpp"

class BacktestEngine : public Logger<BacktestEngine> {
    std::vector<std::unique_ptr<Strategy>> strategies;

public:
    BacktestEngine();
    std::string getLogPrefix() const { return "[BacktestEngine] "; }
    void addStrategy(std::unique_ptr<Strategy> s);
    void run(const std::vector<Tick>& ticks);
};