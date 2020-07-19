#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct node
{
    int data;
    int next;
} list[100000];

int main()
{
    int k, n, first, a;
    vector<int> v[3];
    cin >> first >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        cin >> list[a].data >> list[a].next;
    }
    int p = first;
    while (p != -1)
    {
        int data = list[p].data;
        if (data < 0)
            v[0].push_back(p);
        else if (data >= 0 && data <= k)
            v[1].push_back(p);
        else
            v[2].push_back(p);
        p = list[p].next;
    }
    int flag = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            if (flag == 0)
            {
                printf("%05d %d ", v[i][j], list[v[i][j]].data);
                flag = 1;
            }
            else
            {
                printf("%05d\n%05d %d ", v[i][j], v[i][j], list[v[i][j]].data);
            }
        }
    }
    printf("-1");
    return 0;
}