/**
 * 1062 最简分数 (20分)
 */
#include <iostream>
using namespace std;

// 辗转相除法找最小公约数
int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}

int main()
{
    int n1, m1, n2, m2, k, flag = 0;
    scanf("%d/%d %d/%d %d", &n1, &m1, &n2, &m2, &k);
    if (n1 * m2 > n2 * m1)
    {
        swap(n1, n2);
        swap(m1, m2);
    }
    for (int i = 0; i <= k * n2 / m2; i++)
    {
        if (n1 * k < i * m1 && n2 * k > i * m2)
        {
            if (gcd(i, k) == 1)
            {
                if (flag)
                    printf(" ");
                printf("%d/%d", i, k);
                flag++;
            }
        }
    }
}