#include<iostream>
#include<Windows.h>

using namespace std;

int main()
{
	system("chcp 1251");

	setlocale(LC_ALL, "rus");
	int rub, cop;
	cout << "������� �������� �����\n";
	system("color B");
	cout << "������, ������:";
	cin >> rub;
	cin >> cop;
	rub = rub + cop / 100;
	cop = cop % 100;
	cout << "�� �����: " << rub << " ��� " << cop << " ���";



	return 0;
}