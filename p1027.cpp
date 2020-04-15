/**
 *  1027 打印沙漏 (20分)
 */

#include <iostream>
using namespace std;
int h;
char c;
void print_perh(int n)
{
    int per_h = 2 * (h - 1) - 1;
    for (int i = 0; i < (per_h - n) / 2; i++)
    {
        cout << " ";
    }
    for (int i = 0; i < n; i++)
    {
        cout << c;
    }
    cout << "\n";
}

int main()
{
    int N, m = 0;
    h = 0;
    cin >> N >> c;
    while (m <= N + 1)
    {
        h++;
        m += 2 * (2 * h - 1);
    }
    for (int i = h - 1; i > 0; i--)
    {
        print_perh(2 * i - 1);
    }
    for (int i = 2; i < h; i++)
    {
        print_perh(2 * i - 1);
    }
    cout << N + 1 - (m - 2 * (2 * h - 1));
}