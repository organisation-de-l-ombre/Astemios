//
// Created by Matthieu on 15/06/2020.
//

#ifndef ASTEMIOS_COMMAND_H
#define ASTEMIOS_COMMAND_H

#include <string>
#include <vector>
#include <Logger/LoggerManager.h>

const static auto unknownCommand = new std::string("Unknown Command");
const static auto unknownDescription = new std::string("Unknown Command");

class Command {
public:
    virtual void Execute(std::vector<std::string*>* args) = 0;
    Command(Astemios::AstemiosLogger::LoggerManager* manager);
    const std::string* CommandName = unknownCommand;
    const std::string* CommandDescription = unknownDescription;
protected:

    Astemios::AstemiosLogger::LoggerManager *logger;
};


#endif //ASTEMIOS_COMMAND_H
