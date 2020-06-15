//
// Created by Matthieu on 14/06/2020.
//
/*
#include "DiscordClient.h"

DiscordClient::Logger(std::string* token, char* prefix): SleepyDiscord::DiscordClient(token->c_str())
{
    this->token = token;
    this->prefix = prefix;
    this->logger = LoggerManager();
    this->logger.Info("Logger system initialized.", "Client");
    this->run();
}

DiscordClient::~Logger()
{
    this->logger.~LoggerManager();
}

void DiscordClient::onMessage(SleepyDiscord::Message message) {
    this->logger.Info("Message recevied " + message.content, "Message logger.");
}
void DiscordClient::onReady(std::string* json) {
    this->logger.Info("Logger now connected to the Discord's gateway.", "Client");
}*/