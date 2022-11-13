#include "pch.h"
#include "CppUnitTest.h"
#include "../lab5.2/lab5.2.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			double a = 1;
			A(1, 2, a);
			Assert::AreEqual(a, -0.6);
		}
	};
}