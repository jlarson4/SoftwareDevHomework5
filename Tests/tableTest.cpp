#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Homework 5/Table.h"
#include "../Homework 5/Card.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TableTest
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Table t(4);
			Assert::AreEqual(4, t.getNumberOfPlayers());

			Assert::AreEqual(4, t.dealtHands(7));

			Assert::AreEqual(7, (int)t.getHand(2).size());


			Table t2(7);
			Assert::AreEqual(7, t2.getNumberOfPlayers());

			Assert::AreEqual(7, t2.dealtHands(5));

			Assert::AreEqual(5, (int)t2.getHand(2).size());
		}

	};
}