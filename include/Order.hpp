#pragma once
#include <string>
#include <cstdint>

enum class Side { Buy, Sell };

struct Order {
    std::string symbol;
    Side side;
    double price;
    int quantity;
    uint64_t timestamp;
};

struct Trade {
    std::string symbol;
    Side side;
    double price;
    int quantity;
    uint64_t timestamp;
};