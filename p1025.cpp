/**
 *  1025 反转链表 (25分)
 */

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct L
{
    int address;
    int data;
    int next;
};

int main()
{

    L list[100000];
    vector<L> v;
    int s, n, k, t, count = 0;
    cin >> s >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        cin >> list[t].data >> list[t].next;
        list[t].address = t;
    }

    for (int i = s; i != -1; i = list[i].next)
    {
        count++;  // 有可能存在无效结点，要重新计数--最后一个测试点
        v.push_back(list[i]);
    }
    for (int i = 0; i < count / k; i++)
    {
        reverse(v.begin() + i * k, v.begin() + i * k + k);
    }
    for (int i = 0; i < count - 1; i++)
    {
        printf("%.5d %d %.5d\n", v[i].address, v[i].data, v[i + 1].address);
    }
    printf("%.5d %d -1\n", v[count - 1].address, v[count - 1].data);
}