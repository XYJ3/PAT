/**
 * 1064 朋友数 (20分)
 */
#include <iostream>
using namespace std;
int main()
{
    int n, f[37] = {0}, count = 0;
    string s;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        cin >> s;
        for (int j = 0; j < s.length(); j++)
            sum += s[j] - '0';
        f[sum]++;
        if (f[sum] == 1)
            count++;
    }
    cout << count << endl;
    int flag = 0;
    for (int i = 0; i < 37; i++)
    {
        if (f[i] > 0)
        {
            if (flag)
                cout << " ";
            cout << i;
            flag++;
        }
    }
}