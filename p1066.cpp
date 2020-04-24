/**
 * 1066 图像过滤 (15分)
 */
#include <iostream>
using namespace std;
int main()
{
    int m, n, a, b, t, g[501][501], tmp;
    cin >> m >> n >> a >> b >> t;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> tmp;
            if (tmp >= a && tmp <= b)
                tmp = t;
            g[i][j] = tmp;
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j)
                printf(" ");
            printf("%03d", g[i][j]);
        }
        printf("\n");
    }
}