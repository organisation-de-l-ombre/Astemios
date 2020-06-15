//
// Created by Matthieu on 14/06/2020.
//

#ifndef ASTEMIOS_CONSOLELOGGER_H
#define ASTEMIOS_CONSOLELOGGER_H

#include <iostream>
#include "../../base/BaseLogger.h"
namespace Astemios {
    namespace AstemiosLogger {
        class ConsoleLogger : public BaseLogger {
            void ProcessLogMessage(std::string *message) override;
        };
    }
}


#endif //ASTEMIOS_CONSOLELOGGER_H
