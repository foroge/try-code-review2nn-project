#include "pch.h"
#include "CppUnitTest.h"
#include "ModuleOne.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
namespace UnitTestFotModuleOne
{
	TEST_CLASS(UnitTestFotModuleOne)
	{
	public:
		TEST_METHOD(TestIsSimpleReturnsTrue)
		{
			int n = 3;
			bool expected = true;
			bool actual = IsSimple(n);
			Assert::IsTrue(expected == actual);
		}
		TEST_METHOD(TestIsSimpleFor2ReturnsTrue)
		{
			int n = 2;
			bool expected = true;
			bool actual = IsSimple(n);
			Assert::IsTrue(expected == actual);
		}
		TEST_METHOD(TestIsSimpleFor1ReturnsFalse)
		{
			int n = 1;
			bool expected = false;
			bool actual = IsSimple(n);
			Assert::IsTrue(expected == actual);
		}
	};
}