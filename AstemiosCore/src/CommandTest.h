//
// Created by Matthieu on 15/06/2020.
//

#ifndef ASTEMIOS_COMMANDTEST_H
#define ASTEMIOS_COMMANDTEST_H

#include <AstemiosCommandManager/base/Command.h>
#include <iostream>

class CommandTest : public Command {


public:
    const std::string* CommandName = new std::string("Test");
    const std::string* CommandDescription = new std::string("A simple test command about stuff!");
    void Execute(std::vector<std::string *> *args) override;

    CommandTest(Astemios::AstemiosLogger::LoggerManager *pManager);
};


#endif //ASTEMIOS_COMMANDTEST_H
