#include <iostream>				// Подключение библиотеки iostream
using namespace std;				// Подключение пространства имён std

int main() {					// Главная функция запуска команд
	system("color F4");			// Цвет фона и текста в консоли
	cout << "Hello, World!" << endl;	/* Вывод информации на экран (текст всегда только в двойных кавычках) и переход на следующую строчку
						   (<< endl или "Hello, World!\n") */
	// cout << "Hello, World!\n";
	system("pause");			// Остановка закрытия консоли после запуска программы
	return 0;				// Закрытие консоли
}
