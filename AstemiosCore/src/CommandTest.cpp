//
// Created by Matthieu on 15/06/2020.
//

#include "CommandTest.h"


void CommandTest::Execute(std::vector<std::string *> *args) {
    for (std::string* str : *args) {
        this->logger->Info(*str, "TestCommand");
    }
}

CommandTest::CommandTest(Astemios::AstemiosLogger::LoggerManager *pManager) : Command(pManager) {

}
