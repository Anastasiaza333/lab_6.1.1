#include "pch.h"
#include "CppUnitTest.h"
#include "../Project6.1.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest611
{
	TEST_CLASS(UnitTest611)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int n = 7;
			int b[7] = { -14, -12,-10,-8,-6,-4,-2 };
			int s;
			s = Sum(b,n);
			Assert::AreEqual(s,-56);

		}
	};
}
