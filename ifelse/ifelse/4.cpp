#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	int num;

	cout << "������� ����� ��������: ";
	cin >> num;

	switch (num) {
	case 12:
		cout << "������� - 27.5 ��" << endl;
		break;
	case 17:
		cout << "���������� ����� - 13.6 ��" << endl;
		break;
	case 16:
		cout << "������� - 57.3 ��" << endl;
		break;
	default:
		cout << "error" << endl;
		break;
	}
	cout << "������� - 57.3 ��";
	return 0;
}