//
// Created by Matthieu on 15/06/2020.
//

#ifndef ASTEMIOS_COMMANDMANAGER_H
#define ASTEMIOS_COMMANDMANAGER_H

#include <vector>
#include <string>
#include <iostream>
#include <AstemiosCommandManager/base/Command.h>

namespace Astemios {
    namespace CommandManager {
        class CommandManager {
        public:
            CommandManager();

            void RegisterCommand(Command* command);
            void Execute(std::string* message);

        private:
            std::vector<std::string*>* ParseCommand(std::string* string);
            std::vector<Command*> commands;
        };
    }
}

#endif //ASTEMIOS_COMMANDMANAGER_H
