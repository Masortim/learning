#include <iostream>
#include <Windows.h>

int main()
{
	printf("%x %#x\n", 10, 10);
	printf("%*.*f\n", 10, 4, 1234.34);	//  * - спецификаторы для подстановки значений, 10 ячеек поля, 4 символа после точки ( 1234.3400)
	system("pause");
	return 0;
}
