#pragma once
#include "Strategy.hpp"

class MeanReversionStrategy : public Strategy {
public:
    void onTick(const Tick& tick) override;
    std::vector<Order> generateOrders(const Tick& tick) override;
    std::string name() const override;
}; 