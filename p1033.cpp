/**
 * 1033 旧键盘打字 (20分)
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string broken, full;
    getline(cin, broken); // 读取一行，否则测试点2无法通过
    getline(cin, full);
    for (char s : full)
    {
        if (broken.find(toupper(s)) != -1)
            continue;
        if (isupper(s) && broken.find('+') != -1)
            continue;
        cout << s;
    }
    return 0;
}