#include <iostream>

using namespace std;

int main(){

	setlocale(LC_ALL, "ru");

	float a, b;
	cout << "������� a: ";
	cin >> a;
	cout << "������� b: ";
	cin >> b;

	float x = b / a;
	
	if (a != 0) {
		cout << "� = " << x;
	}
	else {
		cout << "��� �������";
	}
}