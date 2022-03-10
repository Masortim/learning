#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;

int main()
{
	cout << 9 + 3 << endl;      // Сложение
	cout << 9 - 3 << endl;      // Вычитание
	cout << - 9 << endl;        // Изменение знака
	cout << 9 * 3 << endl;      // Умножение
	cout << 9 / 3 << endl;      // Деление нацело (оба операнда целые)
	cout << 9 / 3.75 << endl;   // Деление (хотя бы один вещественный)
	cout << 9 % 3 << endl;      // Остаток от деления, mod (только для целых)
	system("pause");
	return 0;
}
