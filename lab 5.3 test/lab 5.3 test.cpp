#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 5.3/lab 5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace lab53test
{
	TEST_CLASS(lab53test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double c;
			c = z(1);
			Assert::AreEqual(c, 0.0526638, 0.00001);
		}
	};
}
