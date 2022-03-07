#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("%.4f\n", 123.1234567); 			// модификатор отавит после точки только 4 символа, убрав в том числе и 4 (123.1235)
	printf("%9.8d\n", 1000);			// 9-значная строка из 8 символов ( 00001000)
	printf("%10.15s\n", "Это простая проверка.");	//
	system("pause");
	return 0;
}
