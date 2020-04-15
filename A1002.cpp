/**
 * 1002 A+B for Polynomials (25分)
 */
#include <iostream>
using namespace std;
int main()
{
    int k, n, count = 0, max;
    double a[1001] = {0.0}, an;
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        cin >> n >> an;
        if (i == 0)
            max = n;
        a[n] = an;
        count++;
    }
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        cin >> n >> an;
        if (i == 0)
            max = max > n ? max : n;
        if (a[n] == 0)
            count++;
        a[n] += an;
        if (a[n] == 0)
            count--;
    }
    cout << count;
    for (int i = max; i >= 0; i--)
    {
        if (a[i] != 0)
            printf(" %d %.1f", i, a[i]);
    }
}