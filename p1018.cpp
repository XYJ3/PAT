/**
 *  1018 锤子剪刀布 (20分)
 */

#include <iostream>

using namespace std;

int main()
{
    int N;
    int result[3] = {0}, a[3] = {0}, b[3] = {0}; // B,C,J
    char x, y;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> x >> y;
        if (x == y) // 平局
            result[1]++;
        else
        {
            if (x == 'C')
            {
                if (y == 'J') // 甲胜
                {
                    result[0]++;
                    a[1]++;
                }
                else // 已胜
                {
                    result[2]++;
                    b[0]++;
                }
            }
            if (x == 'J')
            {
                if (y == 'B') // 甲胜
                {
                    result[0]++;
                    a[2]++;
                }
                else // 已胜
                {
                    result[2]++;
                    b[1]++;
                }
            }
            if (x == 'B')
            {
                if (y == 'C') // 甲胜
                {
                    result[0]++;
                    a[0]++;
                }
                else // 已胜
                {
                    result[2]++;
                    b[2]++;
                }
            }
        }
    }
    cout << result[0] << " " << result[1] << " " << result[2] << endl;
    cout << result[2] << " " << result[1] << " " << result[0] << endl;
    int k = 0, j = 0, s = 0, d = 0;
    char c[3] = {'B', 'C', 'J'};
    for (int i = 0; i < 3; i++)
    {
        if (a[i] > k)
        {
            k = a[i];
            j = i;
        }
        if (b[i] > s)
        {
            s = b[i];
            d = i;
        }
    }
    cout << c[j] << " " << c[d] << endl;
}