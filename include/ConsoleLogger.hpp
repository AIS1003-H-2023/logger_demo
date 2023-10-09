
#ifndef LIVE_09_10_CONSOLELOGGER_HPP
#define LIVE_09_10_CONSOLELOGGER_HPP

#include <iostream>

#include "Logger.hpp"

class ConsoleLogger : public Logger {

public:
    void log(const std::string &str) override {
        std::cout << str << std::endl;
    }
};

#endif//LIVE_09_10_CONSOLELOGGER_HPP
