#include "ExecutionSimulator.hpp"

std::vector<Trade> ExecutionSimulator::simulate(const std::vector<Order>& orders, const Tick& tick) {
    log("Simulation started.");
    std::vector<Trade> trades;
    for (const auto& order : orders) {
        if (order.price == tick.getPrice()) { // Simple matching logic
            trades.push_back({order.symbol, order.side, order.price, order.quantity, tick.getTimestamp()});
            log("Order executed: " + order.symbol);
        }
    }
    log("Simulation completed.");
    return trades;
} 