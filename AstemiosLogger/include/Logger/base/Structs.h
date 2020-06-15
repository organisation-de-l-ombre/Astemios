//
// Created by Matthieu on 14/06/2020.
//

#ifndef ASTEMIOS_STRUCTS_H
#define ASTEMIOS_STRUCTS_H
#include <string>

namespace Astemios {
    namespace AstemiosLogger {

        enum LogLevel : std::int16_t {
            debug,
            minor,
            info,
            error,
            critical
        };

        struct LogMessage {
            LogLevel log;
            std::string *message;
            std::string *source;
        };
    }
}

#endif //ASTEMIOS_STRUCTS_H
