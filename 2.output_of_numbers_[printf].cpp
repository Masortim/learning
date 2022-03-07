#include <iostream>
#include <Windows.h>

int main()
{
	unsigned num;
	for (num = 0; num < 16; num++) 
  {
		printf("%o", num);
		printf("%x", num);
		printf("%X\n", num);
	}
	system ("pause");
	return 0;
}
