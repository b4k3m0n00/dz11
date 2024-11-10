#include <iostream>
using namespace std;

int main() {

	setlocale(LC_ALL, "ru");

	float A, B, C;

	cout << "Введите A: ";
	cin >> A;
	cout << "Введите B: ";
	cin >> B;
	cout << "Введите C: ";
	cin >> C;
	
	if (A > B) {
		if (A > C) {
			cout << "Максимальное число - А = " << A;
		}
		}
	else if (B > A) {
		if (B > C) {
			cout << "Максимальное число - B = " << B;
		}
		}
	else if (C > A) {
		if (C > B) {
			cout << "Максимальное число - C = " << C;
		}
		}
	if (A == B) {
		if (A > C) {
			cout << "Максимальные числа - А и В = " << A;
		}
		}
	else if (B == C) {
		if (B > A) {
			cout << "Максимальные числа - B и C = " << B;
		}
		}
	else if (C == A) {
		if (A > B) {
			cout << "Максимальные числа - C и А = " << C;
		}
		}
	if (A == B) {
		if (A == C) {
			cout << "Максимальные числа - А и В и C = " << A;
		}
	}
}