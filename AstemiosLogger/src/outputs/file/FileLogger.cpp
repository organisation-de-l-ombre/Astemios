//
// Created by Matthieu on 14/06/2020.
//

#include "Logger/outputs/file/FileLogger.h"

namespace Astemios {
    namespace AstemiosLogger {
        FileLogger::FileLogger() {
            // Get the current time.
            time_t tt;
            time(&tt);
            tm currentTime = *localtime(&tt);

            std::string filename = "logs-";
            filename += std::to_string(currentTime.tm_mday);
            filename += "-";
            filename += std::to_string(currentTime.tm_mon);
            filename += "-";
            filename += std::to_string(currentTime.tm_year);
            filename += "-";
            filename += std::to_string(currentTime.tm_hour);
            filename += "-";
            filename += std::to_string(currentTime.tm_min);
            filename += "-";
            filename += std::to_string(currentTime.tm_sec);
            filename += ".log";
            std::cout << filename << std::endl;
            this->handle.open(filename);
        }

        FileLogger::~FileLogger() {
            this->handle.flush();
            this->handle.close();
        }

        void FileLogger::ProcessLogMessage(std::string *message) {
            this->handle << (*message);
        }
    }
}