#include <iostream>
using namespace std;

// Алгоритм находит максимальное значение из представленных

int main()
{
	int a = 3;
	int b = 4;
	int c = 5;
	int max = a;
	if (max < b) {
		max = b;
	}
	if (max < c) {
		max = c;
	}
	cout << max << endl;
	system("pause");
	return 0;
}
