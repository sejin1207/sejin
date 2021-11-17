#include <iostream>
using namespace std;

int factorial(int k)
{
    if (k == 0)
        return 1;
    return factorial(k - 1) * k;
}

int main()
{
    int c;
    cin >> c;
    cout << factorial(c);
}