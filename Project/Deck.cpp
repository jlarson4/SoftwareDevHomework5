#include <iostream>
#include <string>
#include "Card.h"
#include <vector>
#include "Deck.h"
#include "DealException.h"
#include <ctime>

using namespace std;

Deck::Deck()
{
	deckPosition = 0;

	string suitArray[4] = { "Hearts", "Diamonds", "Clubs", "Spades" };

	for (int i = 0; i < 4; i++)
	{
		for (int x = 2; x < 15; x++)
		{
			Card c(x, suitArray[i]);
			cards.push_back(c);
		}
	}
}

int Deck::getCardCount()
{
	return cards.size();
}

void Deck::shuffle()
{
	deckPosition = 0;

	//Random number
	srand(time(0));

	for (int i = 0; i < cards.size(); i++)
	{
		int randnum;

		randnum = rand() % 52;

		Card temp = cards[randnum];
		cards[randnum] = cards[i];
		cards[i] = temp;
	}
}

vector <Card> Deck::dealCards(int n)
{
	vector <Card> temp;
	for (int i = 0; i < n; i++)
	{
		if (i + deckPosition < 51)
		{
			temp.push_back(cards[i + deckPosition]);
		}
		else
		{
			DealException e;
			throw e;
		}
	}
	
	deckPosition += n;

	return temp;
}