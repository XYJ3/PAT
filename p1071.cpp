/**
 * 1071 小赌怡情 (15分)
 */
#include <iostream>
using namespace std;
int main()
{
    int t, k;
    cin >> t >> k;
    for (int i = 0; i < k; i++)
    {
        int n1, b, c, n2;
        cin >> n1 >> b >> c >> n2;
        if (c > t)
        {
            printf("Not enough tokens.  Total = %d.\n", t);
            continue;
        }
        if ((n2 > n1 && b == 1) || (n2 < n1 && b == 0)) // 玩家赢
        {
            t += c;
            printf("Win %d!  Total = %d.\n", c, t);
        }
        else
        {
            t -= c;
            printf("Lose %d.  Total = %d.\n", c, t);
            if (t <= 0)
            {
                printf("Game Over.");
                break;
            }
        }
    }
    return 0;
}