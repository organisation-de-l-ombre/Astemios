//
// Created by Matthieu on 14/06/2020.
//

#include "Logger/outputs/console/ConsoleLogger.h"

namespace Astemios {
    namespace AstemiosLogger {
        void ConsoleLogger::ProcessLogMessage(std::string *message) {
            std::cout << *message << std::endl;
        }
    }
}