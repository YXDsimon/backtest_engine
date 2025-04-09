#pragma once
#include "Tick.hpp"
#include "Order.hpp"
#include <vector>
#include <string>

class Strategy {
public:
    virtual void onTick(const Tick& tick) = 0;
    virtual std::vector<Order> generateOrders(const Tick& tick) = 0;
    virtual std::string name() const = 0;
    virtual ~Strategy() = default;
};