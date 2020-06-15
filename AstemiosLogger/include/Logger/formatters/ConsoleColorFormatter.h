//
// Created by Matthieu on 14/06/2020.
//

#ifndef ASTEMIOS_CONSOLECOLORFORMATTER_H
#define ASTEMIOS_CONSOLECOLORFORMATTER_H


#include "BasicFormatter.h"
#include <termcolor/termcolor.hpp>
#include <sstream>
namespace Astemios {
    namespace AstemiosLogger {
        class ConsoleColorFormatter : public BasicFormatter {
            std::string *FormatLogMessage(LogMessage message) override;
        };
    }
}


#endif //ASTEMIOS_CONSOLECOLORFORMATTER_H
