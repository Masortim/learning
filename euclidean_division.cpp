#include <iostream>
int integer(int, int);
double remainder(int, int);
using namespace std;
int main()
{
    int a, b;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << integer(a, b) << endl;
    cout << remainder(a, b) << endl;
    return 0;
}
int integer(int a, int b)
{

    return a / b;
}
double remainder(int a, int b)
{
    return a % b;
}
