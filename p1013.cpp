/**
 *  1013 数素数 (20分)
 */
#include <iostream>
#include <cmath>
int chack(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{

    using namespace std;

    int M, N, flag = 1;
    int s[10000], si = 0, count = 0;
    cin >> M >> N;
    for (int i = 2; count < N; i++)
    {
        if (chack(i))
        {
            // if (count > N)
            //     break;
            if (++count >= M)
                s[si++] = i;
        }
    }
    int h = si / 10;
    for (int i = 0; i < h; i++)
    {
        for (int j = i * 10; j < i * 10 + 10; j++)
        {
            if (j == 10 * i + 9)
            {
                cout << s[j] << endl;
                break;
            }

            cout << s[j] << " ";
        }
    }
    if (si % 10)
    {
        for (int i = 0; i < si % 10; i++)
        {
            if (i == si % 10 - 1)
            {
                cout << s[si - 1] << endl;
                break;
            }

            cout << s[si - si % 10 + i] << " ";
        }
    }
}