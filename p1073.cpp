/**
 * 1073 多选题常见计分法 (20分)
 */

#include <iostream>
using namespace std;

struct t
{
    int id;
    double s;
    int count;
    string x;
};

int main()
{
    int n, m;
    t ti[5];
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int tmp;
        cin >> ti[i].s >> tmp >> ti[i].count;
        for (int j = 0; j < ti[i].count; j++)
        {
            char c;
            cin >> c;
            ti[i].x.append(1, c);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int tmp;
            scanf("(%d", &tmp);
            char c;
            string s;
            for (int k = 0; k < tmp; k++)
            {
                cin >> c;
                s.append(1, c);
            }
            char c;
            cin >> c;
        }
    }
}
//计算成绩，a学生答案，b正确答案
double caculate(string a, t b)
{
    if (a.size() > b.x.size())
        return 0;
    else if (a.compare(b.x) == 0)
        return b.s;
    else
    {
        for (int i = 0; i < a.size(); i++)
        {
            
        }
        
    }
    
}