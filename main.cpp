
#include "ConsoleLogger.hpp"
#include "FileLogger.hpp"

void logMessage(Logger &logger, const std::string &message) {
    logger.log(message);
}

class Simulation {

public:
    void setLogger(std::unique_ptr<Logger> logger) {
        logger_ = std::move(logger);
    }

    void step(float dt) {
        t += dt;
        if (logger_) {
            logger_->log("Simulation time=" + std::to_string(t));
        }
    }

private:
    float t{0};
    std::unique_ptr<Logger> logger_;
};

int main() {

    auto consoleLogger = std::make_unique<ConsoleLogger>();
//    logMessage(*consoleLogger, "Hello from ConsoleLogger!");

    auto fileLogger = std::make_unique<FileLogger>("test.txt");
//    logMessage(*fileLogger, "Hello from FileLogger!");

    Simulation sim;
    sim.setLogger(std::move(fileLogger));

    float dt = 0.1f;
    for (int i = 0; i < 10; i++) {
        sim.step(dt);
    }

    return 0;
}
