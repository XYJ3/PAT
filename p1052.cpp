/**
 * 1052 卖个萌 (20分)
 */

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string e[3][10];
    for (int i = 0; i < 3; i++)
    {
        string s;
        getline(cin, s);
        int j = 0, k = 0, count = 0;
        while (j < s.length())
        {
            if (s[j] == '[')
            {
                k = j + 1;
            }
            if (s[j] == ']')
            {
                e[i][count++] = s.substr(k, j - k);
            }
            j++;
        }
    }
    int n, k;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string r;
        for (int j = 0; j < 5; j++)
        {
            cin >> k;
            if ((j == 0 || j == 4) && !e[0][k - 1].empty() && k <= 10)
                r.append(e[0][k - 1]);
            else if (j == 1 && !e[1][k - 1].empty() && k <= 10)
                r.append("(" + e[1][k - 1]);
            else if (j == 3 && !e[1][k - 1].empty() && k <= 10)
                r.append(e[1][k - 1] + ")");
            else if (j == 2 && !e[2][k - 1].empty() && k <= 10)
                r.append(e[2][k - 1]);
            else
            {
                r = "Are you kidding me? @\\/@";
                break;
            }
        }
        cout << r << endl;
    }
}