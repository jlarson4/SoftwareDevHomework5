#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Card.h"
#include "Deck.h"

using namespace std;

class Table
{
public:
	Table(int num);

	void setNumberOfPlayers(int n);
	int getNumberOfPlayers();

	int dealtHands(int n);

	vector <Card> getHand(int playerNumber);

private:
	int numberOfPlayers;
	Deck deck;
	vector<vector <Card>> hands;
};