#pragma once
#include "Order.hpp"
#include "Tick.hpp"
#include <vector>
#include "Logger.hpp"

class ExecutionSimulator : public Logger<ExecutionSimulator> {
public:
    static std::vector<Trade> simulate(const std::vector<Order>& orders, const Tick& tick);

    std::string getLogPrefix() const {
        return "[ExecutionSimulator] ";
    }
};