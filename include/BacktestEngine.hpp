#pragma once
#include "Strategy.hpp"
#include "ExecutionSimulator.hpp"
#include <vector>
#include <memory>

class BacktestEngine {
    std::vector<std::unique_ptr<Strategy>> strategies;

public:
    void addStrategy(std::unique_ptr<Strategy> s);
    void run(const std::vector<Tick>& ticks);
};