# Backtest Engine

A C++ framework for backtesting trading strategies with market data simulation. This engine provides a comprehensive system for testing trading algorithms against historical market data, featuring modular strategy design, portfolio management, and execution simulation.

## Features

- **Strategy Framework**: Abstract base class for implementing custom trading strategies
- **Portfolio Management**: Track positions, calculate returns, and manage average prices
- **Execution Simulation**: Simulate order execution with realistic market conditions
- **Market Data Processing**: Handle tick-by-tick market data with timestamp support
- **Logging System**: Template-based logging for debugging and analysis
- **Mean Reversion Strategy**: Built-in implementation of a mean reversion trading strategy

## Architecture

The engine follows a modular design with key components:

- `BacktestEngine`: Core engine that orchestrates strategy execution
- `Strategy`: Abstract interface for trading strategies (implement `onTick()` and `generateOrders()`)
- `Portfolio`: Position tracking with automatic average price calculation
- `ExecutionSimulator`: Simulates realistic order execution
- `Tick`: Market data structure with price, volume, and timestamp
- `Order`: Order management system for buy/sell operations

## Build

```bash
cmake -S . -B build
cmake --build build
```

## Run

Execute the binary from the build directory:

```bash
./build/BacktestEngine
```
