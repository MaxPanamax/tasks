#include<iostream>
#include<Windows.h>
#include<time.h>
#include<ctime>


using namespace std;

int main()
{
	system("chcp 1251");
	int s, min;
	cout << " ������� ���������� � ����������: ";
	cin >> s;
	cout << " ������� ����� �� ������� ����� ������� � �������: ";
	cin >> min;
	cout << s / (min/60.0) << " ���������� � ���";
	return 0;
}