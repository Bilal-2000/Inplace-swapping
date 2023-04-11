#include <iostream>
using namespace std;

int main()
{
    int a = 1234;
    int b = 5678;

    cout << "Before swapping " << a << " : " << b << endl;
    // a = a ^ b;
    // b = b ^ a;
    // a = a ^ b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "After swapping " << a << " : " << b << endl;
    return 0;
}