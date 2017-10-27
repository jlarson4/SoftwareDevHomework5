#include <iostream>
#include <string>
#include <vector>
#include "Card.h"
#include "Deck.h"
#include "Table.h"
#include "DealException.h"

Table::Table(int num)
{
	setNumberOfPlayers(num);

	Deck d;
	deck = d;
}

void Table::setNumberOfPlayers(int n)
{
	numberOfPlayers = n;
}

int Table::getNumberOfPlayers()
{
	return numberOfPlayers;
}

int Table::dealtHands(int n)
{
	int retVal;
	for (int i = 1; i <= numberOfPlayers; i++)
	{
		try {
			hands.push_back(deck.dealCards(n));
		}
		catch (DealException)
		{

		}
		retVal = i;
	}
	return retVal;
}

vector <Card> Table::getHand(int playerNumber)
{
	return hands[playerNumber];
}