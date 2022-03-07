#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("%.4f\n", 123.1234567);
	printf("%9.8d\n", 1000);
	printf("%10.15s\n", "Это простая проверка.");
	system("pause");
	return 0;
}
