##
## EPITECH PROJECT, 2021
## fluffquest
## File description:
## Makefile
##

all:
	g++ main.cpp -lsfml-graphics -lsfml-audio -lsfml-window -lsfml-system -lglut -lGLU -lGL -g3 -o FluffQuest

clean:
	rm -rf FluffQuest
