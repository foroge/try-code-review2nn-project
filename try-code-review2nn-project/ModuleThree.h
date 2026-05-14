//Содержимое файла ModuleThree.cpp
#pragma once
#include <string>
int findStr1InStr2(std::string str1, std::string str2) {
	int numPos = 0;
	for (int i = 0; i < str2.length(); i++) {
		if (str2[i] == str1[0]) {
			int j = i;
			int k = 0;
			while (j < str2.length() && k < str1.length() && str2[j] == str1[k]) {
				j++;
				k++;
			}
			if (k == str1.length()) {
				return i;
			}
		}
	}
	return -1;
}
