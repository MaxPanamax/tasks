#include<iostream>
#include<Windows.h>
#include<time.h>
#include<ctime>
#include<iomanip>



using namespace std;

int main()
{
	system("chcp 1251");

	const int	WEEK_DAYS = 7,    
		WEEK_ENDS = 2,    
		DAY_POSITIONS = 6;  
						   
	int month_number;
	int day_number;
	cout << "Введите номер месяца: ";
	cin >> month_number;
	cout << "Введите номер дня недели: ";
	cin>> day_number;


	if (month_number  < 1  ||  month_number > 12 || day_number < 1  ||  day_number > 7)
	{
		cout << "Uncorrect data" << endl;
		return -1;
	}


	int month_days = 0;
	switch (month_number)
	{
	case 1:  cout << "Январь" << endl;
		month_days = 31;
		break;
	case 2:  cout << "Февраль" << endl;
		month_days = 28;
		break;
	case 3:  cout << "Март" << endl;
		month_days = 31;
		break;
	case 4:  cout << "Апрель" << endl;
		month_days = 30;
		break;
	case 5:  cout << "Май" << endl;
		month_days = 31;
		break;
	case 6:  cout << "Июнь" << endl;
		month_days = 30;
		break;
	case 7:  cout << "Июль" << endl;
		month_days = 31;
		break;
	case 8:  cout << "Август" << endl;
		month_days = 31;
		break;
	case 9:  cout << "Сентябрь" << endl;
		month_days = 30;
		break;
	case 10: cout << "Октябрь" << endl;
		month_days = 31;
		break;
	case 11: cout << "Ноябрь" << endl;
		month_days = 30;
		break;
	case 12: cout << "Декабрь" << endl;
		month_days = 31;
		break;
	default: break;
	}

	int dayname_position = 2;
	int number_spaces_before = DAY_POSITIONS - dayname_position;
	for (int i = 0; i < number_spaces_before; i++) cout << " ";
	cout << "По";
	for (int i = 0; i < number_spaces_before; i++) cout << " ";
	cout << "Вт";
	for (int i = 0; i < number_spaces_before; i++) cout << " ";
	cout << "Ср";
	for (int i = 0; i < number_spaces_before; i++) cout << " ";
	cout << "Чт";
	for (int i = 0; i < number_spaces_before; i++) cout << " ";
	cout << "Пт";
	for (int i = 0; i < number_spaces_before; i++) cout << " ";
	cout << "Су";
	for (int i = 0; i < number_spaces_before; i++) cout << " ";
	cout << "Во" << endl;

	int calendar_positions = DAY_POSITIONS * WEEK_DAYS; 
	for (int i = 1; i <= calendar_positions; i++) cout << "-";
	cout << endl;
	number_spaces_before = DAY_POSITIONS * (day_number - 1);
	for (int i = 0; i < number_spaces_before; i++)	cout << " ";

	int weekdaysminus1 = WEEK_DAYS - 1; 
	int month_weekends = 0;
	int day = 0;
	for (int i = 1; i <= month_days; i++)
	{
		cout << setw(DAY_POSITIONS) << i;
		day = (day_number - 1 + i) % WEEK_DAYS; 
		if (day == weekdaysminus1)
		{
			month_weekends++;
		}
		else if (day == 0) 
		{
			month_weekends++;
			cout << endl;
		}
	}
	cout << endl;

	cout << " в месяце выходных = " << month_weekends << endl;
	return 0;
}