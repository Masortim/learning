#include <iostream>
#include <Windows.h>

int main()
{
	printf("%x %#x\n", 10, 10);
	printf("%*.*f\n", 10, 4, 1234.34);
	system("pause");
	return 0;
}
