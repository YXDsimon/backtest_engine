#pragma once

#include "Logger.hpp"

class TradeLogger : public Logger<TradeLogger> {
public:
    std::string getLogPrefix() const {
        return "[Trade] ";
    }
}; 