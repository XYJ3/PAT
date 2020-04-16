/**
 * 1048 数字加密 (20分)
 * 测试点2,5 注意补零
 */
#include <iostream>
using namespace std;

int main()
{
    char k[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'J', 'Q', 'K'};
    string a, b, result = "";
    cin >> a >> b;
    for (int i = 1;; i++)
    {
        if (i > a.length() && i > b.length())
            break;
        int ai = 0, bi = 0;
        if (i <= a.length())
            ai = a[a.length() - i] - '0';
        if (i <= b.length())
            bi = b[b.length() - i] - '0';
        if (i % 2) //奇数位
        {
            result.insert(0, 1, k[(ai+bi) % 13]);
        }
        else
        {
            int d = bi - ai;
            d < 0 ? d += 10 : d;
            result.insert(0, 1, k[d]);
        }
    }
    cout << result << endl;
}