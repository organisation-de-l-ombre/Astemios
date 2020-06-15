//
// Created by Matthieu on 14/06/2020.
//
/*
#ifndef ASTEMIOS_DISCORDCLIENT_H
#define ASTEMIOS_DISCORDCLIENT_H

#include <string>
#include "../utils/logger/LoggerManager.h"
#include "sleepy_discord/sleepy_discord.h"
#include "sleepy_discord/websocketpp_websocket.h"


class DiscordClient : public SleepyDiscord::DiscordClient
{
private:
    char* prefix;
    LoggerManager logger;
public:
    using SleepyDiscord::DiscordClient::DiscordClient;
    DiscordClient(std::string* token, char* prefix);
    ~DiscordClient() override;

    void onMessage(SleepyDiscord::Message message) override;
    void onReady(std::string* json);
};

#endif //ASTEMIOS_DISCORDCLIENT_H
*/