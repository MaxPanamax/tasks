#include<iostream>
#include<Windows.h>

using namespace std;

int main()
{
	system("chcp 1251");

	for (int i = 0; i < 26; i++)
	{
			if (i % 2 == 0) // ���� ����� ������� �� ���
			// ��� �������
			{
				continue; // ���������� �������� �����
				// � ������� � i++
			}
		cout << i << " ";
	}
	cout << endl;
	return 0;
}