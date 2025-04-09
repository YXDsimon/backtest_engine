#include "BacktestEngine.hpp"
#include "MeanReversionStrategy.hpp"
#include <iostream>

int main() {
    BacktestEngine engine;
    engine.addStrategy(std::make_unique<MeanReversionStrategy>());

    std::vector<Tick> ticks = {
        Tick("AAPL", 98.5, 100, 1610000000),
        Tick("AAPL", 101.2, 200, 1610000001),
        Tick("AAPL", 97.3, 150, 1610000002)
    };

    engine.run(ticks);
    return 0;
}
