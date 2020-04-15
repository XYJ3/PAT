/**
 *  1009 说反话 (20分)
 */

#include <iostream>
#include <string>
int main()
{
    using namespace std;

    string s[50];
    int count = 0;
    while (cin >> s[count++])
        if (getchar() == '\n')
            break;

    for (int i = count - 1; i > 0; i--)
    {
        cout << s[i] << " ";
    }
    cout << s[0] << endl;
}