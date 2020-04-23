/**
 * 1063 计算谱半径 (20分)
 */
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, a, b;
    float max=0.0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        if (sqrt(a * a + b * b) >= max)
            max = sqrt(a * a + b * b);
    }
    printf("%.2f",max);
}