/**
 * 1059 C语言竞赛 (20分)
 */
#include <iostream>
#include <cmath>
using namespace std;

bool check(int a)
{
    for (int i = 2; i <= sqrt(a); i++)
    {
        if (a % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n, k, s[10000] = {0}, tmp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        s[tmp] = i + 1;
    }
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        cin >> tmp;

        if (s[tmp] == 0)
            printf("%.4d: Are you kidding?\n", tmp);
        else
        {
            if (s[tmp] == -1)
                printf("%.4d: Checked\n", tmp);
            else if (s[tmp] == 1)
                printf("%.4d: Mystery Award\n", tmp);
            else
            {
                if (check(s[tmp]))
                    printf("%.4d: Minion\n", tmp);
                else
                    printf("%.4d: Chocolate\n", tmp);
            }
            s[tmp] = -1;
        }
    }
}