#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Homework 5/Deck.h"
#include "../Homework 5/Card.h"
#include "../Homework 5/DealException.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace DeckTest
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Deck d;
			Assert::AreEqual(52, d.getCardCount());
			try {
				vector <Card> dealtCards = d.dealCards(1);
				Assert::AreEqual(1, (int)dealtCards.size());

				vector <Card> dealtCards1 = d.dealCards(1);
				Assert::AreNotEqual(dealtCards[0].getNumber(), dealtCards1[0].getNumber());

				vector <Card> noCards = d.dealCards(53);
				Assert::IsTrue(noCards.empty());
			}
			catch (DealException) {

			}

			Deck d1;
			d1.shuffle();
			Deck d2;
			
			try {
				vector <Card> dealtCards2 = d1.dealCards(1);

				vector <Card> dealtCards3 = d2.dealCards(1);
				Assert::AreNotEqual(dealtCards2[0].getNumber(), dealtCards3[0].getNumber());
			}
			catch (DealException) {

			}
		}
	};
}