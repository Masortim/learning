#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;

int main()
{
	int number = 2, x=7;              	// целочисленные
	float length = 2.5;               	// вещественные
	bool isEven = true;               	// логическая переменная
	char symbol = '*', letter = 'A';  	// символ
	string str = "apple";			// строка, для её работы желательно подключить библиотеку #include <string>
	cout << number << endl;
	cout << x << endl;
	cout << length << endl;
	cout << isEven << endl;
	cout << symbol << endl;
	cout << letter << endl;
	cout << str << endl;
	system("pause");
	return 0;
}
