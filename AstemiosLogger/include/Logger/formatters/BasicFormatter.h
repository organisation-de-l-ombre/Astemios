//
// Created by Matthieu on 14/06/2020.
//

#ifndef ASTEMIOS_BASICFORMATTER_H
#define ASTEMIOS_BASICFORMATTER_H

#include "../base/BaseFormatter.h"

namespace Astemios {
    namespace AstemiosLogger {

        class BasicFormatter : public BaseFormatter {
        public:
            std::string *FormatLogMessage(LogMessage message) override;

        protected:
            std::string GetPrefix(LogLevel *level);
        };
    }
}

#endif //ASTEMIOS_BASICFORMATTER_H
