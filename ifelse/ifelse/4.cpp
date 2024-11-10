#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	int num;

	cout << "Введите номер маршрута: ";
	cin >> num;

	switch (num) {
	case 12:
		cout << "Трамвай - 27.5 км" << endl;
		break;
	case 17:
		cout << "Маршрутное такси - 13.6 км" << endl;
		break;
	case 16:
		cout << "Автобус - 57.3 км" << endl;
		break;
	default:
		cout << "error" << endl;
		break;
	}
	cout << "Автобус - 57.3 км";
	return 0;
}