//levelTemplate.h
//Header file containing prototypes for levels,
//as well as the character struct
//William, Millard, Harrison

//Project Details
//Make a text-based choose-your-own-adventure game
//featuring turn-based combat and an inventory system
//utilizing bitwise operations.
//So far, there has been good progress on level 0, but the combat system
//and inventory system still need to be implemented
//before it can be finished. Naturally, they are what will
//be worked on next.
//For now, level 0 prompts the user to make some decisions,
//and different responses occur based on what the user
//inputs. There are checks in place for if the user types
//an invalid response.

#ifndef LEVELTEMPLATE_H
#define LEVELTEMPLATE_H
#include<iostream>
#include<string>
#include<vector>
#include<utility>


struct character
{
	std::string name;
	int aggression = 0;
	unsigned long long inventory = 0; //(however we want to make that)
	int HP = 100;
};

/*
	
*/
void newWeapon(int weapon, character& protag);
void newUtility(int utility, character& protag);
void newKey(int key, character& protag);
bool checkWeapon(int weapon, character& protag);
bool checkUtility(int utility, character& protag);
bool checkKey(int key, character& protag);

//notes on inventory:
//first 32 bits be for keys
//next 16 bits for weapons (1 on person at a time)
//final 16 bits for utility purposes (like a candlestick)

//unsigned long long noWeapons = 0xFFff0000FFffFFff; //removes all weapons when put through & operation.


struct enemy
{
	int HP;
	std::string name;
	//moves has a list of moves along with their damage values
	//use rand through the list of moves to determine what the enemy does
	std::vector<std::pair<std::string, int>> moves;
	int money;
	int exp;
};

void lvl0(character& mainChar);

#endif
