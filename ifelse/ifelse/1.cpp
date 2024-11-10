#include <iostream>

using namespace std;

int main(){

	setlocale(LC_ALL, "ru");

	float a, b;
	cout << "Введите a: ";
	cin >> a;
	cout << "Введите b: ";
	cin >> b;

	float x = b / a;
	
	if (a != 0) {
		cout << "х = " << x;
	}
	else {
		cout << "Нет решений";
	}
}