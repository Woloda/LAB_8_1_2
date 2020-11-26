#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_8.1(2)/Lab_8.1(2).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab812
{
	TEST_CLASS(UnitTestLab812)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			using namespace std;
			char lit_r[20] = "sfSQWfs";
			char para[] = "SQ";
			char para1[] = "QS";

			bool l = false;
			l = perevirka(lit_r, para, para1, 0, 0, 0);
			Assert::AreEqual(l, true);
		}
	};
}
