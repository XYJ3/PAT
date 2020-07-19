/*
 * @Author: XYJ
 * @Date: 2020-07-18 17:57:51
 * @LastEditors: XYJ
 * @LastEditTime: 2020-07-18 21:33:21
 * @Description: 1078 字符串压缩与解压 (20分)
 */

#include <iostream>
#include <vector>
using namespace std;

//压缩
int compression()
{
    int flag = 0;
    string tmp;
    while (cin >> tmp)
    {
        cout<<"\n"<<tmp<<endl;
        if (flag == 1)
            cout << " ";
        char pre;
        int count = 0;
        for (int i = 0; i < tmp.size(); i++)
        {
            char c = tmp[i];
            if (c == pre)
            {
                count++;
            }
            else
            {
                if (count == 1)
                    cout << pre;
                else if (count > 1)
                    cout << count << pre;
                pre = c;
                count = 1;
            }
            if (i == (tmp.size() - 1))
            {
                if (count == 1)
                    cout << pre;
                else
                    cout << count << pre;
            }
        }
        flag = 1;
    }
    return 0;
}

//解压
int decompression()
{
    string tmp;
    int flag = 0;
    while (cin >> tmp)
    {
        if (flag == 1)
            cout << " ";
        int count = -1;
        for (int i = 0; i < tmp.size(); i++)
        {
            if (tmp[i] >= 'A' && tmp[i] <= 'z')
            {
                if (count == -1)
                    cout << tmp[i];
                else
                    for (int j = 0; j < count; j++)
                        cout << tmp[i];
                count = -1;
            }
            else
            {
                if (count == -1)
                    count = tmp[i] - '0';
                else
                    count = 10 * count + tmp[i] - '0';
            }
        }
        flag = 1;
    }
    return 0;
}

int main()
{
    char type;
    cin >> type;
    if (type == 'C')
        compression();
    else
        decompression();
    cout<<endl;
    return 0;
}