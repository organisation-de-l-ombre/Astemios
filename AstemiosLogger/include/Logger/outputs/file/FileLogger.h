//
// Created by Matthieu on 14/06/2020.
//

#ifndef ASTEMIOS_FILELOGGER_H
#define ASTEMIOS_FILELOGGER_H

#include <vector>
#include <fstream>
#include <ctime>
#include <string>
#include <iostream>
#include "../../base/BaseLogger.h"

namespace Astemios {
    namespace AstemiosLogger {
        class FileLogger : public BaseLogger {
        public:
            FileLogger();

        private:
            void ProcessLogMessage(std::string *message) override;

        public:
            ~FileLogger();

        private:
            std::ofstream handle;
        };
    }
}


#endif //ASTEMIOS_FILELOGGER_H
