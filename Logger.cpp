#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <chrono>
#include <ctime>

enum class LogLevel {
    INFO,
    WARNING,
    ERROR
};

class Logger {
public:
    Logger(const std::string& filename) : logFile(filename, std::ios::app) {
        if (!logFile.is_open()) {
            std::cerr << "Error: Unable to open log file" << std::endl;
        }
    }

    template <typename... Args>
    void log(LogLevel level, const Args&... args) {
        if (logFile.is_open()) {
            std::stringstream logStream;
            logStream << getCurrentTime() << " [" << logLevelToString(level) << "] ";
            logStream << format(args...) << "\n";
            logFile << logStream.str();
            logFile.flush();
        } else {
            std::cerr << "Error: Log file is not open" << std::endl;
        }
    }

private:
    std::ofstream logFile;

    std::string getCurrentTime() const {
        auto now = std::chrono::system_clock::now();
        std::time_t time = std::chrono::system_clock::to_time_t(now);
        std::tm tm = *std::localtime(&time);

        std::stringstream timeStream;
        timeStream << std::put_time(&tm, "%Y-%m-%d %H:%M:%S");
        return timeStream.str();
    }

    std::string logLevelToString(LogLevel level) const {
        switch (level) {
            case LogLevel::INFO:
                return "INFO";
            case LogLevel::WARNING:
                return "WARNING";
            case LogLevel::ERROR:
                return "ERROR";
        }
        return "";
    }

    template <typename T>
    std::string format(const T& value) const {
        return std::to_string(value);
    }

    template <typename T, typename... Args>
    std::string format(const T& value, const Args&... args) const {
        return std::to_string(value) + " " + format(args...);
    }
};

int main() {
    Logger logger("logfile.txt");

    logger.log(LogLevel::INFO, "Application started");
    logger.log(LogLevel::WARNING, "Something unusual happened");
    logger.log(LogLevel::ERROR, "Critical error occurred:", 42);

    return 0;
}
