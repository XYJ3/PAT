/**
 * 1056 组合数的和 (15分)
 */
#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0, tmp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        sum += tmp * 11 * (n - 1);
    }
    cout << sum << endl;
}