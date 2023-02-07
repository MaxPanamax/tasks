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
        cout << "Работа с клиентами нажмите 1\n Выручка нажмите 2\n Товара на с кладе 3" << endl;
        cin >> menu3;
        switch (menu3)
        {
        case 1:
            do {
                cout << "Клиент 1 нажмите 1 \n Клиент 2 нажмите 2 \n Клиент 3 нажмите 3\n Главное меню нажмите любую другую цифру" << endl;
                cin >> menu1;
                switch (menu1)
                {
                case 1:
                    do {
                        double sum = 0;
                        cout << " Хлеб -5 рублей нажмите 1  " << endl;
                        cout << "Кефир -7 рублей нажмите 2 " << endl;
                        cout << "Молоко - 2 рубля нажмите 3" << endl;
                        cout << "Творого -12 рублей нажмите 4" << endl;
                        cout << "Сметана -19 рублей нажмите 5 " << endl;
                        cout << "Нажмите 6 для подчета суммы и завершения работы " << endl;
                        cin >> menu;
                        switch (menu)
                        {
                        case 1:
                            cout << " Много?: ";
                            cin >> i;
                            while (arr[0] - i < 0) {
                                cout << "Недостаточно товара на складе " << arr[0] << " штук, введите новое колличество" << endl;
                                cin >> i;
                            }
                            arr[0] -= i;
                            sum += i * 5.0;
                            cout << "Ваша сумма за этот товар: " << i * 5.0 << " рублей" << endl;
                            break;
                        case 2:
                            cout << " Много?: ";
                            cin >> i;
                            while (arr[1] - i < 0) {
                                cout << "Недостаточно товара на складе " << arr[1] << " штук, введите новое колличество " << endl;
                                cin >> i;
                            }
                            arr[1] -= i;
                            sum += i * 7.0;
                            cout << "ваша сумма за этот товар: " << i * 7.0 << " рублей" << endl;
                            break;
                        case 3:
                            cout << " Много?: ";
                            cin >> i;
                            while (arr[2] - i < 0) {
                                cout << "Недостаточно товара на складе " << arr[2] << " штук, введите новое колличество" << endl;
                                cin >> i;
                            }
                            arr[2] -= i;
                            sum += i * 2.0;
                            cout << " ваша сумма за этот товар: " << i * 2.0 << " рублей" << endl;
                            break;
                        case 4:
                            cout << " Много?: ";
                            cin >> i;
                            while (arr[3] - i < 0) {
                                cout << "Недостаточно товара на складе " << arr[3] << " штук, введите новое колличество" << endl;
                                cin >> i;
                            }
                            arr[3] -= i;
                            sum += i * 12.0;
                            cout << "ваша сумма за этот товар: " << i * 12.0 << " рублей" << endl;
                            break;
                        case 5:
                            cout << " Много?: ";
                            cin >> i;
                            while (arr[4] - i < 0) {
                                cout << "Недостаточно товара на складе " << arr[4] << " штук, введите новое колличество" << endl;
                                cin >> i;
                            }
                            arr[3] -= i;
                            sum += i * 19.0;
                            cout << "ваша сумма за этот товар: " << i * 19.0 << " рублей" << endl;
                            break;
                        case 6:
                            if (sum > 500)
                                cout << "Ваша сумма оплаты: " << sum - (sum * 0.3) << " рублей" << endl;
                            else
                                cout << "Ваша сумма оплаты: " << sum << "рублей" << endl;

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
                        cout << " Хлеб -5 рублей нажмите 1  " << endl;
                        cout << "Кефир -7 рублей нажмите 2 " << endl;
                        cout << "Молоко - 2 рубля нажмите 3" << endl;
                        cout << "Творого -12 рублей нажмите 4" << endl;
                        cout << "Сметана -19 рублей нажмите 5 " << endl;
                        cout << "Нажмите 6 для подчета суммы и завершения работы " << endl;
                        cin >> menu;
                        switch (menu)
                        {
                        case 1:
                            cout << " Много?: ";
                            cin >> i;
                            while (arr[0] - i < 0) {
                                cout << "Недостаточно товара на складе " << arr[0] << " штук, введите новое колличество" << endl;
                                cin >> i;
                            }
                            arr[0] -= i;
                            sum += i * 5.0;
                            cout << "ваша сумма за этот товар: " << i * 5.0 << " рублей" << endl;
                            break;
                        case 2:
                            cout << " Много?: ";
                            cin >> i;
                            while (arr[1] - i < 0) {
                                cout << "Недостаточно товара на складе " << arr[1] << " штук, введите новое колличество" << endl;
                                cin >> i;
                            }
                            arr[1] -= i;
                            sum += i * 7.0;
                            cout << "ваша сумма за этот товар: " << i * 7.0 << " рублей" << endl;
                            break;
                        case 3:
                            cout << " Много?: ";
                            cin >> i;
                            while (arr[2] - i < 0) {
                                cout << "Недостаточно товара на складе " << arr[2] << " штук, введите новое колличество" << endl;
                                cin >> i;
                            }
                            arr[2] -= i;
                            sum += i * 2.0;
                            cout << "ваша сумма за этот товар: " << i * 2.0 << " рублей" << endl;
                            break;
                        case 4:
                            cout << " Много?: ";
                            cin >> i;
                            while (arr[3] - i < 0) {
                                cout << "Недостаточно товара на складе " << arr[3] << " штук, введите новое колличество" << endl;
                                cin >> i;
                            }
                            arr[3] -= i;
                            sum += i * 12.0;
                            cout << "ваша сумма за этот товар: " << i * 12.0 << " рублей" << endl;
                            break;
                        case 5:
                            cout << " Много?: ";
                            cin >> i;
                            while (arr[4] - i < 0) {
                                cout << "Недостаточно товара на складе " << arr[4] << " штук, введите новое колличество" << endl;
                                cin >> i;
                            }
                            arr[3] -= i;
                            sum += i * 19.0;
                            cout << "ваша сумма за этот товар: " << i * 19.0 << " рублей" << endl;
                            break;
                        case 6:
                            if (sum > 500)
                                cout << "Ваша суммап оплаты: " << sum - (sum * 0.3) << " рублей" << endl;
                            else
                                cout << "Ваша сумма оплаты: " << sum << " рублей" << endl;

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
                        cout << " Хлеб -5 рублей нажмите 1  " << endl;
                        cout << "Кефир -7 рублей нажмите 2 " << endl;
                        cout << "Молоко - 2 рубля нажмите 3" << endl;
                        cout << "Творого -12 рублей нажмите 4" << endl;
                        cout << "Сметана -19 рублей нажмите 5 " << endl;
                        cout << "Нажмите 6 для подчета суммы и завершения работы " << endl;
                        cin >> menu;
                        switch (menu)
                        {
                        case 1:
                            cout << " Много?: ";
                            cin >> i;
                            while (arr[0] - i < 0) {
                                cout << "Недостаточно товара на складе " << arr[0] << " штук, введите новое колличество" << endl;
                                cin >> i;
                            }
                            arr[0] -= i;
                            sum += i * 5.0;
                            cout << "ваша сумма за этот товар: " << i * 5.0 << " рублей" << endl;
                            break;
                        case 2:
                            cout << " Много?: ";
                            cin >> i;
                            while (arr[1] - i < 0) {
                                cout << "Недостаточно товара на складе " << arr[1] << " штук, введите новое колличество" << endl;
                                cin >> i;
                            }
                            arr[1] -= i;
                            sum += i * 7.0;
                            cout << "ваша сумма за этот товар: " << i * 7.0 << " рублей" << endl;
                            break;
                        case 3:
                            cout << " Много?: ";
                            cin >> i;
                            while (arr[2] - i < 0) {
                                cout << "Недостаточно товара на складе " << arr[2] << " штук, введите новое колличество" << endl;
                                cin >> i;
                            }
                            arr[2] -= i;
                            sum += i * 2.0;
                            cout << "ваша сумма за этот товар: " << i * 2.0 << " рублей" << endl;
                            break;
                        case 4:
                            cout << " Много?: ";
                            cin >> i;
                            while (arr[3] - i < 0) {
                                cout << "Недостаточно товара на складе " << arr[3] << " штук, введите новое колличество" << endl;
                                cin >> i;
                            }
                            arr[3] -= i;
                            sum += i * 12.0;
                            cout << "ваша сумма за этот товар: " << i * 12.0 << " рублей" << endl;
                            break;
                        case 5:
                            cout << " Много?: ";
                            cin >> i;
                            while (arr[4] - i < 0) {
                                cout << "Недостаточно товара на складе " << arr[4] << " штук, введите новое колличество" << endl;
                                cin >> i;
                            }
                            arr[3] -= i;
                            sum += i * 19.0;
                            cout << "ваша сумма за этот товар: " << i * 19.0 << " рублей" << endl;
                            break;
                        case 6:
                            if (sum > 500)
                                cout << "Ваша сумма оплаты: " << sum - (sum * 0.3) << " рублей" << endl;
                            else
                                cout << "ваша сумма оплаты: " << sum << " рублей" << endl;

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
            cout << "Ваша выручка состовляет: " << summ << endl;
            break;
        case 3:
            for (size_t i = 0; i < SIZE; i++)
            {
                cout << "Товара номер 1 осталось: " << arr[i] << " штук" << endl;
            }
            break;
        case 4:
            menu3 = 0;

        }
    } while (menu3);




    return 0;
}