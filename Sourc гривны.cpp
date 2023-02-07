#include<iostream>
#include<Windows.h>

using namespace std;

int main()
{
	system("chcp 1251");

	setlocale(LC_ALL, "rus");
	int rub, cop;
	cout << "Введиту денежную сумму\n";
	system("color B");
	cout << "Рублей, копеек:";
	cin >> rub;
	cin >> cop;
	rub = rub + cop / 100;
	cop = cop % 100;
	cout << "Вы ввели: " << rub << " руб " << cop << " коп";



	return 0;
}