#include<iostream>
#include<Windows.h>

using namespace std;

int main()
{
	system("chcp 1251");


 setlocale (LC_ALL, "Russian");
	double r(0), m(0), km(0);
	cout << "������� ������ �����"<<endl;
	cin >> m;
	cout << "������� ���������" << endl;
	cin >> r;
	km = m * r;
	cout << "��������� ����� ��������" << km << endl;






		return 0;
}