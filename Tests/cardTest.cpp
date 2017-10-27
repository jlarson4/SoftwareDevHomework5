#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Homework 5/Card.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Card c(2, "Hearts");
			Assert::AreEqual(2, c.getNumber());
			Assert::AreEqual("Hearts", c.getSuit().c_str());

			Card c1(0, "Dog");
			Assert::AreEqual(-1, c1.getNumber());
			Assert::AreEqual("", c1.getSuit().c_str());

			Card c2(10, "Diamonds");
			Assert::AreEqual("10 of Diamonds", c2.print().c_str());

			Card c3(11, "Clubs");
			Assert::AreEqual("J of Clubs", c3.print().c_str());
		}

	};
}