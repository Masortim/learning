#include <iostream> // Input/output header library
int integer(int, int);
double remainder(int, int);
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian"); // Cyrillic symbols in console
    
    int a, b;
    cout << "Делимое: ";
    cin >> a;
    cout << "Делитель: ";
    cin >> b;
    cout << integer(a, b) << endl;
    cout << remainder(a, b) << endl;
    return 0;
}
int integer(int a, int b)
{
    cout << "Целое: ";
    return a / b;
}
double remainder(int a, int b)
{
    cout << "Остаток: ";
    return a % b;
}
