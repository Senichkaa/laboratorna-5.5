#include "pch.h"
#include "CppUnitTest.h"
#include "..\\pr5.5\Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab55
{
	TEST_CLASS(UnitTestLab55)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int n = 120;
			double S = (n % 10);
			Assert::AreEqual(S, 0.);
		}
	};
}
