/**
 * 1069 微博转发抽奖 (20分)
 */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int m, n, s;
    string nick;
    cin >> m >> n >> s;
    vector<string> v;
    vector<string> win;
    for (int i = 0; i < m; i++)
    {
        cin >> nick;
        v.push_back(nick);
    }
    if (s > m)
        cout << "Keep going...";
    for (int i = s - 1; i < m; i += n)
    {
        for (int j = 0; j < n; i++)
        {
            vector<string>::iterator result = find(win.begin(), win.end(), v[i + j]);
            if (result == win.end()) // 没找到
            {
                win.push_back(v[i + j]);
                break;
            } 
        }
    }
    for (int i = 0; i < win.size(); i++)
    {
        cout << win[i] << "\n";
    }
}