#include <iostream>
#include "Card.h"
#include <string>

using namespace std;

Card::Card(int n, string s)
{
	setNumber(n);
	setSuit(s);
}

void Card::setNumber(int n)
{
	if (n >= 2 && n <= 14)
	{
		number = n;
	}
	else
	{
		number = -1;
	}
}

int Card::getNumber()
{
	return number;
}

void Card::setSuit(string s)
{
	if (s == "Hearts" || s == "Diamonds" || s == "Spades" || s == "Clubs")
	{
		suit = s;
	}
	else
	{
		suit = "";
	}
	
}

string Card::getSuit()
{
	return suit;
}

string Card::print()
{
	string num;

	if (number == 11)
	{
		num = "J";
	}
	else if (number == 12)
	{
		num = "Q";
	}
	else if (number == 13)
	{
		num = "K";
	}
	else if (number == 14)
	{
		num = "A";
	}
	else
	{
		num = to_string(number);
	}
	return num + " of " + suit;
}