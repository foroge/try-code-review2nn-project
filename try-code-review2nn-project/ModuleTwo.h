//Содержимое файла ModuleTwo.cpp
#pragma once
#include <cmath>
double distance(double x1, double y1, double x2, double y2) {
	return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}
double squareTriangle(double x1, double y1, double x2, double y2, double x3, double
	y3) {
	double a = distance(x1, y1, x2, y2);
	double b = distance(x1, y1, x3, y3);
	double c = distance(x3, y3, x2, y2);
	double p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}
