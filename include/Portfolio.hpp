#pragma once

#include <unordered_map>
#include <string>

class Portfolio {
public:
    Portfolio();

    // 添加持仓
    void addPosition(const std::string& symbol, double quantity, double price);

    // 更新持仓
    void updatePosition(const std::string& symbol, double quantity, double price);

    // 移除持仓
    void removePosition(const std::string& symbol);

    // 计算总价值
    double calculateTotalValue() const;

    // 计算收益率
    double calculateReturn() const;

private:
    struct Position {
        double quantity;
        double averagePrice;
    };

    std::unordered_map<std::string, Position> positions;
    double initialCapital;
}; 