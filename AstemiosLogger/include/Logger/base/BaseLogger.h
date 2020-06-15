//
// Created by Matthieu on 14/06/2020.
//

#ifndef ASTEMIOS_BASELOGGER_H
#define ASTEMIOS_BASELOGGER_H

#include <string>

namespace Astemios {
    namespace AstemiosLogger {
        class BaseLogger {
        public:
            virtual void ProcessLogMessage(std::string *message) = 0;
        };
    }
}

#endif //ASTEMIOS_BASELOGGER_H
