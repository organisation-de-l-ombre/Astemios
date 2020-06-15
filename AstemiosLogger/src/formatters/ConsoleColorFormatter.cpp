//
// Created by Matthieu on 14/06/2020.
//


#include "Logger/formatters/ConsoleColorFormatter.h"
namespace Astemios {
    namespace AstemiosLogger {
        std::string *ConsoleColorFormatter::FormatLogMessage(LogMessage message) {
            std::stringstream stream;
            stream
                    << termcolor::colorize
                    << termcolor::grey << "[" << termcolor::green << GetPrefix(&message.log) << termcolor::grey << "] ["
                    << termcolor::blue << *message.source << termcolor::grey << "]"
                    << termcolor::blue << *message.message << "\r";
            return new std::string(stream.str());
        }
    }
}