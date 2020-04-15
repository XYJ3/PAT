/**
 * 1042 字符统计 (20分)
 */

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string str;
    int count[26] = {0}, m = 0;
    getline(cin,str);
    for (int i = 0; i < str.length(); i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            count[tolower(str[i]) - 'a']++;
    }
    for (int i = 0; i < 26; i++)
        m = max(count[i], m);
    for (int i = 0; i < 26; i++)
    {
        if (count[i] == m)
        {
            printf("%c %d", i + 'a', count[i]);
            break;
        }
    }
}