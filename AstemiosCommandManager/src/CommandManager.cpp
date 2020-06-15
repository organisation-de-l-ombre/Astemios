//
// Created by Matthieu on 15/06/2020.
//

#include "AstemiosCommandManager/CommandManager.h"

namespace Astemios {
    namespace CommandManager {
        CommandManager::CommandManager() {

        }

        std::vector<std::string*>* CommandManager::ParseCommand(std::string *string) {
            auto strings = new std::vector<std::string*>;
            auto temp = new std::string ();
            bool escapeOpened = false;
            // Split the string.
            for (char character : *string) {
                if (character == '"')
                    escapeOpened = !escapeOpened;
                else
                    (*temp) += character;
                if (character == ' ' && !escapeOpened) {
                    strings->push_back(temp);
                    temp = new std::string();
                }
            }
            strings->push_back(temp);
            return strings;
        }

        void CommandManager::RegisterCommand(Command *command) {
            this->commands.push_back(command);
        }

        void CommandManager::Execute(std::string *message) {
            std::vector<std::string*>* arguments = ParseCommand(message);
            std::string commandName = *(arguments->at(0));
            Command* foundCommand = nullptr;

            for (auto & command : this->commands) {
                if (command->CommandName->compare(commandName)) {
                    foundCommand = command;
                    break;
                }
            }

            if (foundCommand == nullptr) return;
            delete (*arguments)[0];
            arguments->erase(arguments->begin());
            foundCommand->Execute(arguments);

            // Memory cleanup
            for (auto & arg : *arguments)
                delete arg;
            delete arguments;
        }
    }
}