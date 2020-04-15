/**
 *  1010 一元多项式求导 (25分)
 */

#include <iostream>
int main()
{
    using namespace std;

    int m, n, count = 0;
    cin >> m >> n;
    if (!n)
        cout << "0 0";
    else
        cout << m * n << " " << n - 1;

    while (cin >> m >> n)
    {
        if (n)
            cout << " " << m * n << " " << n - 1;
    }
}