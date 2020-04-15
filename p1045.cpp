/**
 * 1045 快速排序 (25分)
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, k[100001], result[100001], count = 0, l_max, r_min;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> k[i];
    }
    if (n == 1 || k[1] >= k[0])
        result[count++] = k[0];
    if (k[n - 2] <= k[n - 1])
        result[count++] = k[n - 1];

    l_max = k[0];
    for (int i = 0; i < n; i++)
    {
        if(k[i]>=l_max)
        {
            l_max=k[i];
        }
    }
    

    for (int i = 1; i < n - 1; i++)
    {
        if (k[i] >= k[i - 1] && k[i] <= k[i + 1])
        {
            result[count++] = k[i];
        }
    }

    sort(result, result + count);
    printf("%d\n", count);
    for (int i = 0; i < count; i++)
    {
        if (i)
            printf(" ");
        printf("%d", result[i]);
    }
    printf("\n");
}