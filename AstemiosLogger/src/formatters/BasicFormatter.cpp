//
// Created by Matthieu on 14/06/2020.
//

#include "Logger/formatters/BasicFormatter.h"

namespace Astemios {
    namespace AstemiosLogger {
        std::string *BasicFormatter::FormatLogMessage(LogMessage message) {
            return new std::string("[" + GetPrefix(&message.log) + "][" + *message.source + "] " + *message.message + "\r");
        }

        std::string BasicFormatter::GetPrefix(LogLevel *level) {
            switch (*level) {
                case info:
                    return "INFO";
                case error:
                    return "ERROR";
                case debug:
                    return "DEBUG";
                case minor:
                    return "MINOR";
                case critical:
                    return "CRITICAL";
                default:
                    return "UNKNOWN";
            }
        }
    }
}