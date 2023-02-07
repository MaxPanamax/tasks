#include <iostream>
#include <Windows.h>
using namespace std;

enum Colors {
    Black, Blue, Green, Cyan, Red, Magenta, Brown, LightGray,
    DarkGray, LightBlue, LightGreen, LightCyan, LightRed, LightMagenta, Yellow, White;
}

template<Colors txt = LightGray, Colors bg = Black>
ostream& color(ostream& text) {
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hStdOut, (WORD)((bg << 4) | txt));
    return text;
}

int main()
{
system("chcp 1251");


    cout << color<Red, Black> << " Каждый  Красный\n " << color<LightRed, Black> << "Охотник Оранжевый\n" << color;
    cout << color<Yellow, Black> << " Желает  Желтый\n" << color<Green, Black> << " Знать   Зеленый\n" << color;
    cout << color<Cyan, Black> << " Где     Голубой\n" << color<Blue, Black> << " Сидит   Синий\n" << color;
   cout<< color<LightMagenta, Black> << " Фазан   Фиолетовый\n" << color;

    return 0;
}
