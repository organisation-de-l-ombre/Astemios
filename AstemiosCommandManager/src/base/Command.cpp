#include <AstemiosCommandManager/base/Command.h>

Command::Command(Astemios::AstemiosLogger::LoggerManager *manager) {
    this->logger = manager;
}