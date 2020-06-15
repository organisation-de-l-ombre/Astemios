
#include <AstemiosCommandManager/CommandManager.h>
#include <Logger/outputs/file/FileLogger.h>
#include <Logger/outputs/console/ConsoleLogger.h>
#include <Logger/formatters/ConsoleColorFormatter.h>
#include "CommandTest.h"

int main(void) {
    Astemios::CommandManager::CommandManager manager;
    Astemios::AstemiosLogger::LoggerManager loggerManager;

    loggerManager.RegisterLoggerLayer(new Astemios::AstemiosLogger::FileLogger());
    loggerManager.RegisterLoggerLayer(new Astemios::AstemiosLogger::ConsoleLogger());

    manager.RegisterCommand(new CommandTest(&loggerManager));
    std::string* message = new std::string("Test hey!");
    for (int i = 0; i < 1000; i++)
        manager.Execute(message);

    return 0;
}