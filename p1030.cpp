/**
 * 1030 完美数列 (25分)
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int N, M, p, m, num[100001]; //定义变量
int ans = 1;                 //最定义大个数

int main()
{
    scanf("%d%d", &N, &p);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &num[i]);
    }
    sort(num, num + N);
    for (int i = 0; i < N; i++)
    {
        int j = upper_bound(num + i + 1, num + N, (long long)p * num[i]) - num; //在num[i+1]到num[n-1]之间找出第一个大于 p*num[i]的元素位置
        ans = max(ans, j - i);                                                  //更新最大个数 (j-i 表示j和i之间的距离）
    }
    printf("%d\n", ans);
    return 0;
}