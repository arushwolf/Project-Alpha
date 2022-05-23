#pragma once

#include <cstdlib> //For several general-purpose functions
#include <fstream> //For file handling
#include <iomanip> //For formatted output
#include <iostream> //For output system (cin, cout, etc.)
#include <string> //For additional functions for string data type

using namespace std; //For abbreviation ("std::cout" --> "cout")

class characterBase //basic frame of all characters
{
private:
	/*primary character stats
	all characters will have these stats regardless of class*/
	string name; //the name of the character
	int level; //the level of the character
	double hitpoints; //how much damage a character can take
	double attack; //how much physical damage a character can cause
	double defence; //how much physical damage a character can deflect
	int speed; //determines if attack hits and who attacks first
	double accuracy; //also a part of determining whether an attack (or debuff) hits
	double resist; //how much magic damage a character can deflect

	/*secondary character stats
	most characters will have some or all of these stats*/
	double critRate; //the chance of doing critical damage
	double critDamage; //the amount by which attack is muliplied and added
	int mana; //determines how many spells can be cast at a time
	double magicPower; //how much magic damage a character can cause using spells

	/*tertiary character stats
	only few characters will have one or more of these stats*/
	int range;
	double physVamp; //percentage of physical damage that heals
	double magVamp; //percentage of magic damage that heals
	double omniVamp; //percentage of ANY damage that heals
};

//arush