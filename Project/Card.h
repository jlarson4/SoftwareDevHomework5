#pragma once
#include <iostream>
#include <string>

using namespace std;

class Card
{
public:
	void setNumber(int n);
	int getNumber();

	void setSuit(string s);
	string getSuit();

	Card(int n, string s);

	string print();

private:
	int number;
	string suit;
};