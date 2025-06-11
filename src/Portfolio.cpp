#include "Portfolio.hpp"

Portfolio::Portfolio() : initialCapital(0.0) {}

void Portfolio::addPosition(const std::string& symbol, double quantity, double price) {
    positions[symbol] = {quantity, price};
}

void Portfolio::updatePosition(const std::string& symbol, double quantity, double price) {
    if (positions.find(symbol) != positions.end()) {
        auto& position = positions[symbol];
        // Keep the previous quantity to correctly weight the average price
        double oldQuantity = position.quantity;
        // Weighted-average update of the position's average price
        position.averagePrice = (position.averagePrice * oldQuantity + price * quantity) /
                               (oldQuantity + quantity);
        position.quantity = oldQuantity + quantity;
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