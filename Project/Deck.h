#pragma once
#include <iostream>
#include <string>
#include "Card.h"
#include <vector>

using namespace std;

class Deck
{
public:
	Deck();

	int getCardCount();

	void shuffle();

	vector <Card> dealCards(int n);

private:
	vector <Card> cards;
	int deckPosition;
};