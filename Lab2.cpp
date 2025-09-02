#include <iostream>

using namespace std;

int main()
{
    int a = 1010;
    int b = 11000;
    
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << a << " " << b << endl;

    return 0;
}