#include<iostream>
#include<Windows.h>

using namespace std;

int main()
{
	system("chcp 1251");
	int digit, summ;
	cout << "������� �����:\n";
	cin >> digit;
	cout << "���� ������ �������� = ";
		while (digit > 0)
		{
			summ = digit % 10;
			digit /= 10;
			cout << summ;
		}
	return 0;
}
	