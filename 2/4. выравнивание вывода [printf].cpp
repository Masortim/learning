#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf(".........................\n");
	printf("по правому краю: %8d\n", 100);
	printf("по левому краю: %-8d\n", 100);
	system("pause");
	return 0;
}
