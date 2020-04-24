/**
 * 1067 试密码 (20分)
 */
#include <iostream>
using namespace std;
int main()
{
    string passwd, test;
    int times;
    cin >> passwd >> times;
    getchar(); // 测试点2

    for (int i = 0; i < times; i++)
    {
        getline(cin, test);
        if (test == "#")
            return 0;
        if (test == passwd)
        {
            printf("Welcome in\n");
            return 0;
        }
        else
            cout << "Wrong password: " + test + "\n";
    }
    cout << "Account locked\n";
}