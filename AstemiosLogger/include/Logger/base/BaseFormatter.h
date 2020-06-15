//
// Created by Matthieu on 14/06/2020.
//

#ifndef ASTEMIOS_BASEFORMATTER_H
#define ASTEMIOS_BASEFORMATTER_H
#include <string>
#include "Structs.h"

namespace Astemios {
    namespace AstemiosLogger {
        class BaseFormatter {
        public:
            virtual std::string *FormatLogMessage(LogMessage message) = 0;
        };
    }
}


#endif //ASTEMIOS_BASEFORMATTER_H
