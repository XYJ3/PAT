/**
 * 1065 单身狗 (25分)
 */
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, dou[100000] = {-1};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        dou[a] = b;
        dou[b] = a;
    }
    int m, k[10001], single[10001], count = 0, flag = 0;
    cin >> m;
    for (int i = 0; i < m; i++)
        cin >> k[i];
    for (int i = 0; i < m; i++)
    {
        if (dou[k[i]] == -1)
        {
            single[count++] = k[i];
        }
        else
        {
            flag = 0;
            for (int j = 0; j < m; j++)
            {
                if (dou[k[i]] == k[j])
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
                single[count++] = k[i];
        }
    }
    sort(single, single + count);
    cout << count << "\n";
    for (int i = 0; i < count; i++)
    {
        if (i)
            printf(" ");
        printf("%05d", single[i]);
    }
}