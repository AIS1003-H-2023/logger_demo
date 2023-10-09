
#ifndef LIVE_09_10_LOGGER_HPP
#define LIVE_09_10_LOGGER_HPP

#include <string>

class Logger {

public:
    //virtual void log(const std::string &str) = 0; // pure virtual
    virtual void log(const std::string &str) { // Provides an implementation to demo Object Slicing
        std::cout << "I dont't care about str input!!" << std::endl;
    }
};

#endif//LIVE_09_10_LOGGER_HPP
