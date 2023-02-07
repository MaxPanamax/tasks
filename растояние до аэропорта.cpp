#include<iostream>
#include<Windows.h>
#include<time.h>
#include<ctime>


using namespace std;

int main()
{
	system("chcp 1251");
	int s, min;
	cout << " ¬ведите рассто€ние в километрах: ";
	cin >> s;
	cout << " ¬ведите врем€ за которое нужно доехать в минутах: ";
	cin >> min;
	cout << s / (min/60.0) << " километров в час";
	return 0;
}