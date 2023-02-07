#include<iostream>
#include<Windows.h>

using namespace std;

int main()
{
	system("chcp 1251");

	for (int i = 0; i < 26; i++)
	{
			if (i % 2 == 0) // если число делится на два
			// без остатка
			{
				continue; // остановить итерацию цикла
				// и перейти к i++
			}
		cout << i << " ";
	}
	cout << endl;
	return 0;
}