#include<iostream>
#include<Windows.h>
#include<time.h>
#include<ctime>


using namespace std;

int main()
{
    system("chcp 1251");
    time_t start = time(0);
    {

        srand(unsigned(time(NULL)));
        int a, b, i;
        a = rand() % 500 + 1;
        cout << "���� \"������ �����\".\n\n";
        cout << "��������� \"�������\" ����� �� 1 �� 500.\n";
        cout << "������� ����� � ������� <Enter>\n\n";

        for (i = 1;i < 10;i++)
        {
            cout << "--->";
            cin >> b;
            if (b == a)
            {
                cout << "�� ��������! ����������!\n";
                cout << "�� �������� ����� � " << i << "-�� �������!\n";
                break;
            }
            if (b > a)
            {
                cout << "���, �������� ���� �����, ������ \"�����������\" �����������\n";
            }
            if (b < a)
            {
                cout << "���, �������� ���� �����, ������ \"�����������\" �����������\n";
            }
        }
        if (b != a && i == 5)
        {
             cout << "� ��������� �� ��� � �� ������ ������� �����...\n";
        }
        time_t end = time(0);
        int seconds = end - start;
        cout << "�� ���������� ���������  " << seconds << " ������ ";
    }
	return 0;
}