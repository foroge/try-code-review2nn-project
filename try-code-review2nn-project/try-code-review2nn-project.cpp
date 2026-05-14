//Содержимое файла ConsoleAppForTests.cpp
#include "pch.h"
using namespace System;
#include "pch.h"
#include <iostream>
#include "ModuleOne.h"
#include "ModuleTwo.h"
int ReverseN(int n) {
	int m = 0;
	while (n > 0) {
		m = m * 10 + n % 10;
		n = n / 10;
	}
	return m;
}
bool IsPalindrom(int n) {
	if (ReverseN(n) == n) return true; else return false;
}
int main(array<System::String^>^ args)
{
	std::cout << "Hello World!\n";
	std::cout << "\nReverseN(12345) = " << ReverseN(12345);
	std::cout << "\nIsPalindrom(12345) = " << IsPalindrom(12345);
	std::cout << "\nIsPalindrom(12321) = " << IsPalindrom(12321) << "\n\n";
	std::cout << "\nIsSimple(15) = " << IsSimple(15) << "\n";
	std::cout << "\nIsSimple(17) = " << IsSimple(17) << "\n";
	std::cout << "\nIsSimple(113) = " << IsSimple(113) << "\n";
	std::cout << "\nIsSimple(105) = " << IsSimple(105) << "\n";
	std::cout << "\nNextSimple(15) = " << NextSimple(15) << "\n";
	std::cout << "\nNextSimple(5) = " << NextSimple(5) << "\n";
	std::cout << "\nNextSimple(6) = " << NextSimple(6) << "\n";
	std::cout << "\nPrevSimple(29) = " << PrevSimple(29) << "\n";
	std::cout << "\nPrevSimple(19) = " << PrevSimple(19) << "\n";
	std::cout << "\nNextSimple(19) = " << NextSimple(19) << "\n";
	std::cout << "\nNext + Prev (19) = " << myFunc(19) << "\n";
	std::cout << "\ndistance (0,1,1,0) = " << distance(0, 1, 1, 0) << "\n";
	return 0;
}