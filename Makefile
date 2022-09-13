###############################################
#########       A simple MAKEFILE that will help you to      ###########
#########      to build Engr Moune's App on your              ###########
#########      WINDOW's Machine with his libraries.            ###########
#########      Just open your command prompt,               ###########
#########      navigate to the folder having this file,         ###########
#########     then run the command  "make"                     ###########
#########              ENJOY !!!!!!!                                            ###########
###############################################
#########      Copyright (c) 2022                                       ###########
###     Daniel Moune Computer Systems, Inc.                                                 ###
###                                                                                                                    ###
###     Permission to use, copy, modify, distribute and sell this software    ###
###     and its documentation for any purpose is hereby granted without fee  #
###     provided that the above copyright notice appear in all copies and    ###
###     that both that copyright notice and this permission notice appear   ###
###     in supporting documentation.  Engr Daniel Moune makes no           ###
###     representations about the suitability of this software for any          ###
###     purpose.  It is provided "as is" without express or implied warranty. ###
###############################################

# Build all targets before building the app
all: Tetris.exe

# Builds the app
Tetris.exe: obj\main.o lib\libgame.a lib\libbrick.a lib\libevent.a lib\libeffects.a
    g++ -std=c++11 -Wall -I.\include -o obj\main.o -c src\main.cpp
    g++ -std=c++11 -Wall obj\main.o -L.\lib -lgame -lbrick -levent -leffects -o build\Tetris.exe -lsfml-graphics -lsfml-window -lsfml-system

# Clean all output files
clean:
    rm obj\main.o build\Tetris