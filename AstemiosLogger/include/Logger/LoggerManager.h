//
// Created by Matthieu on 14/06/2020.
//

#ifndef ASTEMIOS_LOGGERMANAGER_H
#define ASTEMIOS_LOGGERMANAGER_H
#include <vector>
#include <memory>
#include <string>
#include "base/Structs.h"
#include "base/BaseLogger.h"
#include "base/BaseFormatter.h"

#include "formatters/BasicFormatter.h"

namespace Astemios {
    namespace AstemiosLogger {
        class LoggerManager {
        private:
            LogLevel minimumLevel;
            BaseFormatter* formatter;
            std::vector<BaseLogger *> loggerLayers;

            void Execute(std::string* message, std::string* source, LogLevel level);
            void Execute(LogMessage message);
        public:
            LoggerManager();
            ~LoggerManager();

            void RegisterLoggerLayer(BaseLogger* logger);
            void SetFormatter(BaseFormatter* formatter);


            void Execute(std::string message, std::string source, LogLevel level);
            void Minor(std::string message, std::string source);
            void Debug(std::string message, std::string source);
            void Info(std::string message, std::string source);
            void Error(std::string message, std::string source);
            void Critical(std::string message, std::string source);
        };
    }
}

#endif //ASTEMIOS_LOGGERMANAGER_H
