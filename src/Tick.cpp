#include "Tick.hpp"

Tick::Tick(const std::string& symbol, double price, double volume, uint64_t timestamp)
    : symbol(symbol), price(price), volume(volume), timestamp(timestamp) {}

const std::string& Tick::getSymbol() const {
    return symbol;
}

double Tick::getPrice() const {
    return price;
}

double Tick::getVolume() const {
    return volume;
}

uint64_t Tick::getTimestamp() const {
    return timestamp;
} 