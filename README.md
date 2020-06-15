# Astemios

Astemios is a discord bot written in C++.

The bot is divided in 3 individual parts:

- The Logger ( AstemiosLogger )
  - Namespace : Astemios::AstemiosLogger
- The CommandManager ( CommandManager )
  - Namespace: Astemios::AstemiosCommandManager
  
 Every project is divided in two folders, include for the headers files
 and src for the implementation of the classes in the header files.

For now, the project uses two libraries, sleepy_discord for the discord client
and termcolor (not used).  