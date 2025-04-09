#include "MeanReversionStrategy.hpp"

void MeanReversionStrategy::onTick(const Tick& tick) {
    // Implementation for onTick
}

std::vector<Order> MeanReversionStrategy::generateOrders(const Tick& tick) {
    std::vector<Order> orders;
    if (tick.getPrice() < 100.0) {
        orders.push_back({tick.getSymbol(), Side::Buy, tick.getPrice(), 100, tick.getTimestamp()});
    }
    return orders;
}

std::string MeanReversionStrategy::name() const {
    return "MeanReversion";
} 