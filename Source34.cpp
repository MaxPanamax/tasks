// первое занятие по програмированию
#include<iostream>
#include<Windows.h>

using namespace std;

int main()
{
	system("chcp 1251");


	int grivn, l;

	float cop, sum, razn;
	printf("Ведите колличество гривен:\n");
		scanf("%d", &grivn);
		printf("Введите колличество копеек;\n");
		scant("%f", &kop);
		kop = kop / 100;
		sum = grivn + kop;
		l = sum;
		razn = (sum - l) * 100;
		printf("\nГривен: %грн. %ofкоп.",l,razn)
	


	return 0;
}