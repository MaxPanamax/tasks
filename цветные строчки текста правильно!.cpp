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


    cout << color<Red, Black> << " ������  �������\n " << color<LightRed, Black> << "������� ���������\n" << color;
    cout << color<Yellow, Black> << " ������  ������\n" << color<Green, Black> << " �����   �������\n" << color;
    cout << color<Cyan, Black> << " ���     �������\n" << color<Blue, Black> << " �����   �����\n" << color;
   cout<< color<LightMagenta, Black> << " �����   ����������\n" << color;

    return 0;
}
