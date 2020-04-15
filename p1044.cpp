/**
 * 1044 火星数字 (20分)
 */

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string low[13] = {"tret", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
    string high[12] = {"tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
    int n, m;
    string s;
    cin >> n;
    getchar();
    for (int i = 0; i < n; i++)
    {
        getline(cin, s);
        m = 0;
        if (s[0] >= '0' && s[0] <= '9')
        {
            for (int j = 0; j < s.length(); j++)
            {
                m = m * 10 + (s[j] - '0');
            }

            if (m / 13)
            {
                cout << high[m / 13 - 1];
                if (m % 13)
                    cout << " " << low[m % 13];
            }
            else
                cout << low[m % 13];
            cout << endl;
        }
        else
        {
            if (s.length() > 3)
            {
                for (int j = 0; j < 12; j++)
                {
                    if (s.compare(0, 3, high[j]) == 0)
                    {
                        m += (j + 1) * 13;
                        break;
                    }
                }
                for (int j = 1; j < 13; j++)
                {
                    if (s.compare(4, 3, low[j]) == 0)
                    {
                        m += j;
                        break;
                    }
                }
                cout << m << endl;
            }
            else
            {
                for (int j = 0; j < 13; j++)
                {
                    if (s.compare(high[j]) == 0 && j != 12)
                    {
                        m += (j + 1) * 13;
                        break;
                    }
                    if (s.compare(low[j]) == 0)
                    {
                        m += j;
                        break;
                    }
                }
                cout << m << endl;
            }
        }
    }
}