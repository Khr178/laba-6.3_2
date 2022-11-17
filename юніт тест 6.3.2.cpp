#include "pch.h"
#include "CppUnitTest.h"
#include "../лаба 6.3.2/лаба 6.3.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace юніттест632
{
	TEST_CLASS(юніттест632)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int s[1] = { 1 };
			int b;
			b = Sum1(s, 0, 0, 0);
			Assert::AreEqual(b, 0);
		}
	};
}
