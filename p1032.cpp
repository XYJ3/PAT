/**
 * 1032 挖掘机技术哪家强 (20分)
 */

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int N, id, score, a[200001] = {0}, maxs = 0, maxi;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> id >> score;
        a[id] += score;
    }
    for (int i = 0; i <= N; i++)  // 测试点2 i<=N
    {
        if (a[i] >= maxs)
        {
            maxi = i;
            maxs = a[i];
        }
    }
    cout << maxi << " " << a[maxi];
}