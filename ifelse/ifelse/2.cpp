#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
		float a, b, c;

		cout << "������� a: ";
		cin >> a;
		cout << "������� b: ";
		cin >> b;
		cout << "������� c: ";
		cin >> c;
			
		if (a == 0) {
			cout << "��� �� ���������� ���������" << endl;
		}

		else {
			float D = b * b - 4 * a * c;
				if (D > 0) {
					float x1 = (-b + sqrt(D)) / 2 * a;
					float x2 = (-b - sqrt(D)) / 2 * a;
					cout << "x1 = " << x1 << endl;
					cout << "x2 = " << x2 << endl;
				}
				else if (D == 0) {
					float x = -b / 2 * a;
					cout << "x = " << x << endl;
				}
				else {
					cout << "��� ������";
				}
		}
	return 0;
}