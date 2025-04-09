#pragma once

#include <string>

class Tick {
public:
    Tick(const std::string& symbol, double price, double volume, uint64_t timestamp);

    const std::string& getSymbol() const;
    const std::string& getTime() const;
    double getPrice() const;
    double getVolume() const;
    uint64_t getTimestamp() const;

private:
    std::string symbol;
    double price;
    double volume;
    uint64_t timestamp;
}; 