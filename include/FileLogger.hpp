
#ifndef LIVE_09_10_FILELOGGER_HPP
#define LIVE_09_10_FILELOGGER_HPP

#include <filesystem>
#include <fstream>

#include "Logger.hpp"

class FileLogger: public Logger {

public:
    FileLogger(const std::filesystem::path& path): out_(path) {}

    void log(const std::string &str) override {
        out_ << str << std::endl;
    }

private:
    std::ofstream out_;
};

#endif//LIVE_09_10_FILELOGGER_HPP
