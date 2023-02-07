#include<iostream>
#include<Windows.h>

using namespace std;

int main()
{
	system("chcp 1251");


 setlocale (LC_ALL, "Russian");
	double r(0), m(0), km(0);
	cout << "Введите маштаб карты"<<endl;
	cin >> m;
	cout << "Введите растояние" << endl;
	cin >> r;
	km = m * r;
	cout << "Растояние между городами" << km << endl;






		return 0;
}