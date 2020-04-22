/**
 * 1057 数零壹 (20分)
 */
#include <iostream>
using namespace std;
int main()
{
    string s;
    int n = 0, count[2] = {0};
    getline(cin, s);
    for (char c : s)
    {
        c = tolower(c);
        if (c >= 'a' && c <= 'z')
            n += c - 'a' + 1;
    }
    while (n >= 1)
    {
        count[n % 2]++;
        n /= 2;
    }
    cout << count[0] << " " << count[1];
}