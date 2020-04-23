/**
 * 1061 判断题 (15分)
 */
#include <iostream>
#include <vector>
using namespace std;

struct problem
{
    int s, t;
};

int main()
{
    int n, m, s = 0;
    cin >> n >> m;
    vector<problem> p(m);
    for (int i = 0; i < m; i++)
        cin >> p[i].s;
    for (int i = 0; i < m; i++)
        cin >> p[i].t;
    for (int i = 0; i < n; i++)
    {
        s = 0;
        for (int j = 0; j < m; j++)
        {
            int tmp;
            cin >> tmp;
            if (tmp == p[j].t)
                s += p[j].s;
        }
        cout<<s<<endl;
    }
}
