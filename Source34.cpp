// ������ ������� �� ���������������
#include<iostream>
#include<Windows.h>

using namespace std;

int main()
{
	system("chcp 1251");


	int grivn, l;

	float cop, sum, razn;
	printf("������ ����������� ������:\n");
		scanf("%d", &grivn);
		printf("������� ����������� ������;\n");
		scant("%f", &kop);
		kop = kop / 100;
		sum = grivn + kop;
		l = sum;
		razn = (sum - l) * 100;
		printf("\n������: %���. %of���.",l,razn)
	


	return 0;
}