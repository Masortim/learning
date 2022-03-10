#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;


// Результат 0.000000
/* int main()
{
	int x = 3;
	int y = 2;
	cout << x / y << endl;
	printf("%f\n", x/y);
	system("pause");
	return 0;
} */


// Результат 1
/* int main()
{
	int x = 3;
	int y = 2;
	cout << x / y << endl;
	system("pause");
	return 0;
} */


// Результат 1.5
/* int main()
{
	int x = 3;
	float y = 2;
	cout << x / y << endl;
	system("pause");
	return 0;
} */


// Результат 1.5
/* int main()
{
	int x = 3;
	int y = 2;
	cout << x / (float)y << endl;
	system("pause");
	return 0;
} */


// Результат 1
/* int main()
{
	cout << 3 / 2 << endl;
	system("pause");
	return 0;
} */


// Результат 1.5
/* int main()
{
	cout << 3.0 / 2 << endl;
	system("pause");
	return 0;
} */


// Результат 1
/* int main()
{
	int x = 3;
	int y = 2;
	int z = x / (float)y;
	cout << z << endl;
	system("pause");
	return 0;
} */


// Результат 1.5
/* int main()
{
	int x = 3;
	int y = 2;
	float z = x / (float)y;
	cout << z << endl;
	system("pause");
	return 0;
} */


// Результат 1.500000
/* int main()
{
	int x = 3;
	float y = 2;
	float z = x / y;
	printf("%f\n", z);
	system("pause");
	return 0;
} */


// Результат 1.5
int main()
{
	int x = 3;
	float y = 2;
	float z = x / y;
	printf("%g\n", z);
	system("pause");
	return 0;
}
