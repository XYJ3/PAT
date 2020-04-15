/**
 *  1028 人口普查 (20分)
 */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct people
{
    char name[6];
    int y, m, d;
};

bool comp(people a, people b)
{
    return ((a.y - 1814) * 365 + a.m * 31 + a.d) < ((b.y - 1814) * 365 + b.m * 31 + b.d);
}

int main()
{
    int n;
    people ptemp;
    vector<people> p;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        scanf("%s %d/%d/%d", ptemp.name, &ptemp.y, &ptemp.m, &ptemp.d);
        int d_count = (ptemp.y - 1814) * 365 + ptemp.m * 31 + ptemp.d;
        if (d_count <= 200 * 365 + 9 * 31 + 6 && d_count >= 9 * 31 + 6)
            p.push_back(ptemp);
    }

    sort(p.begin(), p.end(), comp);
    cout << p.size();
    if (p.size())
        cout << " " << p[0].name << " " << p[p.size() - 1].name;
}