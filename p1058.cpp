/**
 * 1058 选择题 (20分)
 */
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

struct problem
{
    int id;     // 编号
    int score;  // 分数
    int tc;     // 正确选项个数
    string t;   // 正确选项
    int wc = 0; // 错误统计
};

bool comp(problem a, problem b)
{
    if (a.wc == b.wc)
        return a.id < b.id;
    return a.wc > b.wc;
}

int main()
{
    int n, m;
    problem p[101];
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int tmp;
        char c;
        cin >> p[i].score >> tmp >> p[i].tc;
        for (int j = 0; j < p[i].tc; j++)
        {
            cin >> c;
            p[i].t.append(1, c);
        }
        p[i].id = i + 1;
    }
    for (int i = 0; i < n; i++)
    {
        int s = 0;
        for (int j = 0; j < m; j++)
        {
            char c;
            string d;
            int a;
            cin >> c >> a;
            for (int k = 0; k < a; k++)
            {
                cin >> c;
                d.append(1, c);
            }
            cin >> c;
            if (p[j].t == d)
                s += p[j].score;
            else
                p[j].wc++;
        }
        cout << s << endl;
    }

    sort(p, p + m, comp);
    if (p[0].wc == 0)
        printf("Too simple\n");
    else
    {
        printf("%d %d", p[0].wc, p[0].id);
        int i = 1;
        while (true)
        {
            if (i < m && p[i].wc == p[0].wc)
            {
                printf(" %d", p[i].id);
                i++;
            }
            else
                break;
        }
    }
}