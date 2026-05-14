#pragma once
bool IsSimple(int n) {
	if (n <= 1) return false;
	for (int i = 2; i <= n / 2; i++) {
		if (n % i == 0) return false;
	}
	return true;
}
int NextSimple(int n) {
	//if (n <= 1) return -1;
	n++;
	while (true) {
		if (IsSimple(n)) return n;
		n++;
		if (n < 0) return -1;
	}
}
int PrevSimple(int n) {
	//if (n <= 2) return -1;
	n--;
	while (true) {
		if (IsSimple(n)) return n;
		n--;
		if (n <= 2) return -1;
	}
}
int myFunc(int n) {
	return NextSimple(n) + PrevSimple(n);
}