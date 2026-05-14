#include "pch.h"
#include "CppUnitTest.h"
#include "ModuleTwo.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
namespace UnitTestFotModuleTwo
{
	TEST_CLASS(UnitTestFotModuleTwo)
	{
		double eps = 0.00001;
	public:
		TEST_METHOD(TestSquareTriangle)
		{
			double x1 = 3;
			double y1 = 0;
			double x2 = 0;
			double y2 = 4;
			double x3 = 0;
			double y3 = 0;
			double expected = 6;
			double actual = squareTriangle(x1, y1, x2, y2, x3, y3);
			Assert::IsTrue(abs(expected - actual) < eps);

		}
		TEST_METHOD(TestDistance)
		{
			double x1 = 0;
			double y1 = 4;
			double x2 = 0;
			double y2 = 0;
			double expected = 4;
			double actual = distance(x1, y1, x2, y2);
			Assert::IsTrue(abs(expected - actual) < eps);
		}
	};
}