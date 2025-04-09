#pragma once

#include <iostream>
#include <string>

// CRTP Logger

template <typename Derived>
class Logger {
public:
    void log(const std::string& message) const {
        std::cout << static_cast<const Derived*>(this)->getLogPrefix() << message << std::endl;
    }
};