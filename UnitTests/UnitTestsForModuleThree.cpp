#include "pch.h"
#include "CppUnitTest.h"
#include "ModuleThree.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
namespace UnitTestFotModuleThree
{
	TEST_CLASS(UnitTestFotModuleThree)
	{
	public:
		TEST_METHOD(TestFindS1Ins2Returns0)
		{
			std::string s1 = "Скоро";
			std::string s2 = "Скоробогатово";
			int expected = 0;
			int actual = findStr1InStr2(s1, s2);
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(TestFindS1Ins2Returns2)
		{
			std::string s1 = "Скоро";
			std::string s2 = "rtСкоробогатово";
			int expected = 0;
			int actual = findStr1InStr2(s1, s2);
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(TestFindS1InS2Returns6)
		{
			std::string s1 = "Скоро";
			std::string s2 = "богатоСкорово";
			int expected = 0;
			int actual = findStr1InStr2(s1, s2);
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(TestFindS1Ins2ReturnsMinus1)
		{
			std::string s1 = "werty";
			std::string s2 = "Скоробогатово";
			int expected = -1;
			int actual = findStr1InStr2(s1, s2);
			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(TestFindS1Ins2ReturnsMinus1Too)
		{
			Assert::AreEqual(-1, findStr1InStr2("AbcAbcAbc", "OiuOiuOiy"));
		}
	};
}