#include <iostream>
using namespace std;

int main() {

	setlocale(LC_ALL, "ru");

	float A, B, C;

	cout << "������� A: ";
	cin >> A;
	cout << "������� B: ";
	cin >> B;
	cout << "������� C: ";
	cin >> C;
	
	if (A > B) {
		if (A > C) {
			cout << "������������ ����� - � = " << A;
		}
		}
	else if (B > A) {
		if (B > C) {
			cout << "������������ ����� - B = " << B;
		}
		}
	else if (C > A) {
		if (C > B) {
			cout << "������������ ����� - C = " << C;
		}
		}
	if (A == B) {
		if (A > C) {
			cout << "������������ ����� - � � � = " << A;
		}
		}
	else if (B == C) {
		if (B > A) {
			cout << "������������ ����� - B � C = " << B;
		}
		}
	else if (C == A) {
		if (A > B) {
			cout << "������������ ����� - C � � = " << C;
		}
		}
	if (A == B) {
		if (A == C) {
			cout << "������������ ����� - � � � � C = " << A;
		}
	}
}