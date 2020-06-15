//
// Created by Matthieu on 14/06/2020.
//

#include "Logger/LoggerManager.h"
namespace Astemios {
    namespace AstemiosLogger {
        void LoggerManager::Execute(std::string* message, std::string* source, LogLevel level) {
            LogMessage logStruct {
                    level,
                    message,
                    source
            };
            this->Execute(logStruct);
        }

        void LoggerManager::Execute(std::string message, std::string source, LogLevel level) {
            this->Execute(&message, &source, level);
        }

        void LoggerManager::Execute(LogMessage message) {
            if (message.log < this->minimumLevel) return;

            std::string* formatted = this->formatter->FormatLogMessage(message);

            for (auto & layer : this->loggerLayers) {
                layer->ProcessLogMessage(formatted);
            }
        }

        LoggerManager::LoggerManager() {
            this->formatter = new BasicFormatter();
        }

        void LoggerManager::SetFormatter(BaseFormatter *formatter1) {
            this->formatter = formatter1;
        }

        LoggerManager::~LoggerManager() {
            delete this->formatter;
            for (auto & layer : this->loggerLayers) {
                delete layer;
            }
        }

        void LoggerManager::RegisterLoggerLayer(BaseLogger* logger) {
            this->loggerLayers.push_back(logger);
        }

        void LoggerManager::Minor(std::string message, std::string source) {
            this->Execute(&message, &source, LogLevel::minor);
        }

        void LoggerManager::Debug(std::string message, std::string source) {
            this->Execute(&message, &source, LogLevel::debug);
        }

        void LoggerManager::Info(std::string message, std::string source) {
            this->Execute(&message, &source, LogLevel::info);
        }

        void LoggerManager::Error(std::string message, std::string source) {
            this->Execute(&message, &source, LogLevel::error);
        }

        void LoggerManager::Critical(std::string message, std::string source) {
            this->Execute(&message, &source, LogLevel::critical);
        }
    }
}


