#include<iostream>
#include<Windows.h>
#include<time.h>
#include<ctime>
#include<iomanip>


using namespace std;

int main()
{
    system("chcp 1251");
    const size_t SIZE = 5;
    double i;
    double summ = 0;;
    int arr[SIZE]{ 400,400,400,400,400 };
    int menu, menu1, menu3;

    do {
        cout << "������ � ��������� ������� 1\n ������� ������� 2\n ������ �� � ����� 3" << endl;
        cin >> menu3;
        switch (menu3)
        {
        case 1:
            do {
                cout << "������ 1 ������� 1 \n ������ 2 ������� 2 \n ������ 3 ������� 3\n ������� ���� ������� ����� ������ �����" << endl;
                cin >> menu1;
                switch (menu1)
                {
                case 1:
                    do {
                        double sum = 0;
                        cout << " ���� -5 ������ ������� 1  " << endl;
                        cout << "����� -7 ������ ������� 2 " << endl;
                        cout << "������ - 2 ����� ������� 3" << endl;
                        cout << "������� -12 ������ ������� 4" << endl;
                        cout << "������� -19 ������ ������� 5 " << endl;
                        cout << "������� 6 ��� ������� ����� � ���������� ������ " << endl;
                        cin >> menu;
                        switch (menu)
                        {
                        case 1:
                            cout << " �����?: ";
                            cin >> i;
                            while (arr[0] - i < 0) {
                                cout << "������������ ������ �� ������ " << arr[0] << " ����, ������� ����� �����������" << endl;
                                cin >> i;
                            }
                            arr[0] -= i;
                            sum += i * 5.0;
                            cout << "���� ����� �� ���� �����: " << i * 5.0 << " ������" << endl;
                            break;
                        case 2:
                            cout << " �����?: ";
                            cin >> i;
                            while (arr[1] - i < 0) {
                                cout << "������������ ������ �� ������ " << arr[1] << " ����, ������� ����� ����������� " << endl;
                                cin >> i;
                            }
                            arr[1] -= i;
                            sum += i * 7.0;
                            cout << "���� ����� �� ���� �����: " << i * 7.0 << " ������" << endl;
                            break;
                        case 3:
                            cout << " �����?: ";
                            cin >> i;
                            while (arr[2] - i < 0) {
                                cout << "������������ ������ �� ������ " << arr[2] << " ����, ������� ����� �����������" << endl;
                                cin >> i;
                            }
                            arr[2] -= i;
                            sum += i * 2.0;
                            cout << " ���� ����� �� ���� �����: " << i * 2.0 << " ������" << endl;
                            break;
                        case 4:
                            cout << " �����?: ";
                            cin >> i;
                            while (arr[3] - i < 0) {
                                cout << "������������ ������ �� ������ " << arr[3] << " ����, ������� ����� �����������" << endl;
                                cin >> i;
                            }
                            arr[3] -= i;
                            sum += i * 12.0;
                            cout << "���� ����� �� ���� �����: " << i * 12.0 << " ������" << endl;
                            break;
                        case 5:
                            cout << " �����?: ";
                            cin >> i;
                            while (arr[4] - i < 0) {
                                cout << "������������ ������ �� ������ " << arr[4] << " ����, ������� ����� �����������" << endl;
                                cin >> i;
                            }
                            arr[3] -= i;
                            sum += i * 19.0;
                            cout << "���� ����� �� ���� �����: " << i * 19.0 << " ������" << endl;
                            break;
                        case 6:
                            if (sum > 500)
                                cout << "���� ����� ������: " << sum - (sum * 0.3) << " ������" << endl;
                            else
                                cout << "���� ����� ������: " << sum << "������" << endl;

                            summ += sum;
                            sum = 0;
                            menu = 0;
                            break;
                        default:
                            menu = 0;
                            break;
                        }
                    } while (menu);
                    break;
                case 2:
                    do {
                        double sum = 0;
                        cout << " ���� -5 ������ ������� 1  " << endl;
                        cout << "����� -7 ������ ������� 2 " << endl;
                        cout << "������ - 2 ����� ������� 3" << endl;
                        cout << "������� -12 ������ ������� 4" << endl;
                        cout << "������� -19 ������ ������� 5 " << endl;
                        cout << "������� 6 ��� ������� ����� � ���������� ������ " << endl;
                        cin >> menu;
                        switch (menu)
                        {
                        case 1:
                            cout << " �����?: ";
                            cin >> i;
                            while (arr[0] - i < 0) {
                                cout << "������������ ������ �� ������ " << arr[0] << " ����, ������� ����� �����������" << endl;
                                cin >> i;
                            }
                            arr[0] -= i;
                            sum += i * 5.0;
                            cout << "���� ����� �� ���� �����: " << i * 5.0 << " ������" << endl;
                            break;
                        case 2:
                            cout << " �����?: ";
                            cin >> i;
                            while (arr[1] - i < 0) {
                                cout << "������������ ������ �� ������ " << arr[1] << " ����, ������� ����� �����������" << endl;
                                cin >> i;
                            }
                            arr[1] -= i;
                            sum += i * 7.0;
                            cout << "���� ����� �� ���� �����: " << i * 7.0 << " ������" << endl;
                            break;
                        case 3:
                            cout << " �����?: ";
                            cin >> i;
                            while (arr[2] - i < 0) {
                                cout << "������������ ������ �� ������ " << arr[2] << " ����, ������� ����� �����������" << endl;
                                cin >> i;
                            }
                            arr[2] -= i;
                            sum += i * 2.0;
                            cout << "���� ����� �� ���� �����: " << i * 2.0 << " ������" << endl;
                            break;
                        case 4:
                            cout << " �����?: ";
                            cin >> i;
                            while (arr[3] - i < 0) {
                                cout << "������������ ������ �� ������ " << arr[3] << " ����, ������� ����� �����������" << endl;
                                cin >> i;
                            }
                            arr[3] -= i;
                            sum += i * 12.0;
                            cout << "���� ����� �� ���� �����: " << i * 12.0 << " ������" << endl;
                            break;
                        case 5:
                            cout << " �����?: ";
                            cin >> i;
                            while (arr[4] - i < 0) {
                                cout << "������������ ������ �� ������ " << arr[4] << " ����, ������� ����� �����������" << endl;
                                cin >> i;
                            }
                            arr[3] -= i;
                            sum += i * 19.0;
                            cout << "���� ����� �� ���� �����: " << i * 19.0 << " ������" << endl;
                            break;
                        case 6:
                            if (sum > 500)
                                cout << "���� ������ ������: " << sum - (sum * 0.3) << " ������" << endl;
                            else
                                cout << "���� ����� ������: " << sum << " ������" << endl;

                            summ += sum;
                            sum = 0;
                            menu = 0;
                            break;
                        default:
                            menu = 0;
                            break;
                        }
                    } while (menu);
                    break;
                case 3:
                    do {
                        double sum = 0;
                        cout << " ���� -5 ������ ������� 1  " << endl;
                        cout << "����� -7 ������ ������� 2 " << endl;
                        cout << "������ - 2 ����� ������� 3" << endl;
                        cout << "������� -12 ������ ������� 4" << endl;
                        cout << "������� -19 ������ ������� 5 " << endl;
                        cout << "������� 6 ��� ������� ����� � ���������� ������ " << endl;
                        cin >> menu;
                        switch (menu)
                        {
                        case 1:
                            cout << " �����?: ";
                            cin >> i;
                            while (arr[0] - i < 0) {
                                cout << "������������ ������ �� ������ " << arr[0] << " ����, ������� ����� �����������" << endl;
                                cin >> i;
                            }
                            arr[0] -= i;
                            sum += i * 5.0;
                            cout << "���� ����� �� ���� �����: " << i * 5.0 << " ������" << endl;
                            break;
                        case 2:
                            cout << " �����?: ";
                            cin >> i;
                            while (arr[1] - i < 0) {
                                cout << "������������ ������ �� ������ " << arr[1] << " ����, ������� ����� �����������" << endl;
                                cin >> i;
                            }
                            arr[1] -= i;
                            sum += i * 7.0;
                            cout << "���� ����� �� ���� �����: " << i * 7.0 << " ������" << endl;
                            break;
                        case 3:
                            cout << " �����?: ";
                            cin >> i;
                            while (arr[2] - i < 0) {
                                cout << "������������ ������ �� ������ " << arr[2] << " ����, ������� ����� �����������" << endl;
                                cin >> i;
                            }
                            arr[2] -= i;
                            sum += i * 2.0;
                            cout << "���� ����� �� ���� �����: " << i * 2.0 << " ������" << endl;
                            break;
                        case 4:
                            cout << " �����?: ";
                            cin >> i;
                            while (arr[3] - i < 0) {
                                cout << "������������ ������ �� ������ " << arr[3] << " ����, ������� ����� �����������" << endl;
                                cin >> i;
                            }
                            arr[3] -= i;
                            sum += i * 12.0;
                            cout << "���� ����� �� ���� �����: " << i * 12.0 << " ������" << endl;
                            break;
                        case 5:
                            cout << " �����?: ";
                            cin >> i;
                            while (arr[4] - i < 0) {
                                cout << "������������ ������ �� ������ " << arr[4] << " ����, ������� ����� �����������" << endl;
                                cin >> i;
                            }
                            arr[3] -= i;
                            sum += i * 19.0;
                            cout << "���� ����� �� ���� �����: " << i * 19.0 << " ������" << endl;
                            break;
                        case 6:
                            if (sum > 500)
                                cout << "���� ����� ������: " << sum - (sum * 0.3) << " ������" << endl;
                            else
                                cout << "���� ����� ������: " << sum << " ������" << endl;

                            summ += sum;
                            sum = 0;
                            menu = 0;
                            break;
                        default:
                            menu = 0;
                            break;
                        }
                    } while (menu);
                    break;
                default:
                    menu1 = 0;
                }
            } while (menu1);
            break;
        case 2:
            cout << "���� ������� ����������: " << summ << endl;
            break;
        case 3:
            for (size_t i = 0; i < SIZE; i++)
            {
                cout << "������ ����� 1 ��������: " << arr[i] << " ����" << endl;
            }
            break;
        case 4:
            menu3 = 0;

        }
    } while (menu3);




    return 0;
}