/**
 * 1029 旧键盘 (20分)
 */

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string t, f;
    int a[200] = {0};
    cin >> t >> f;
    for (char s : t)
    {
        if (f.find(s) == string::npos)
        {
            char c = toupper(s);
            if (!a[c])
            {
                cout << c;
                a[c]++;
            }
        }
    }
}