/**
 * 1050 螺旋矩阵 (25分)
 */
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int p, k[10001], m, n, result[100][100];
    cin >> p;
    for (int i = 0; i < p; i++)
    {
        cin >> k[i];
    }
    sort(k, k + p);
    int temp = sqrt(p);
    for (int i = temp; i <= p; i++)
    {
        if (p % i == 0)
        {
            m = max(p / i, i);
            n = min(p / i, i);
            break;
        }
    }
    // int count=p;
    int i = 0, j = 0;
    while (p >= 0)
    {

        while (j < n && !result[i][j])
        {
            result[i][++j] = k[--p];
        }
        while (i < m && !result[i][j])
        {
            result[++i][j] = k[--p];
        }
        while (j >= 0 && !result[i][j])
        {
            result[i][j--] = k[--p];
        }
        while (i >= 0 && !result[i][j])
        {
            result[i--][j] = k[--p];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}