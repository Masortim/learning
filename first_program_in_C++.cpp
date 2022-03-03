#include <iostream>				// Подключение библиотеки iostream
#include <windows.h>				// Подключение русского языка в Windows
using namespace std;				// Подключение пространства имён std

int main() {					// Главная функция запуска команд
	SetConsoleCP(1251);                 	// Ввод кириллицы
	SetConsoleOutputCP(1251);           	// Вывод кириллицы
	system("color F4");			// Цвет фона и текста в консоли
	cout << "Hello, World!" << endl;	/* Вывод информации на экран (текст всегда только в двойных кавычках) и переход на следующую строчку
						   (<< endl или "Hello, World!\n") */
	// cout << "Hello, World!\n";
	// cout << "Привет, мир!" << endl;
	system("pause");			// Остановка закрытия консоли после запуска программы
	return 0;				// Закрытие консоли
}
