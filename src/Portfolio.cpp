#include "Portfolio.hpp"

Portfolio::Portfolio() : initialCapital(0.0) {}

void Portfolio::addPosition(const std::string& symbol, double quantity, double price) {
    positions[symbol] = {quantity, price};
}

void Portfolio::updatePosition(const std::string& symbol, double quantity, double price) {
    if (positions.find(symbol) != positions.end()) {
        auto& position = positions[symbol];
        position.quantity += quantity;
        position.averagePrice = (position.averagePrice * position.quantity + price * quantity) / (position.quantity + quantity);
    } else {
        addPosition(symbol, quantity, price);
    }
}

void Portfolio::removePosition(const std::string& symbol) {
    positions.erase(symbol);
}

double Portfolio::calculateTotalValue() const {
    double totalValue = 0.0;
    for (const auto& [symbol, position] : positions) {
        totalValue += position.quantity * position.averagePrice;
    }
    return totalValue;
}

double Portfolio::calculateReturn() const {
    double totalValue = calculateTotalValue();
    return (totalValue - initialCapital) / initialCapital;
} 