#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_6.3_2/lab_6.3_2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest632
{
	TEST_CLASS(UnitTest632)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int b;
			b = main();
			Assert::AreEqual(b, 0);
		}
	};
}
