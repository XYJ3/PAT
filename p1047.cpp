/**
 * 1047 编程团体赛 (20分)
 */

#include <iostream>

using namespace std;

int main()
{
    int n, id, c, max = 0, m, t, d[1001] = {0};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        scanf("%d-%d %d", &id, &t, &c);
        d[id] += c;
        if (d[id] >= max)
        {
            max = d[id];
            m = id;
        }
    }
    cout << m << " " << max;
}