/*
 * @Author: XYJ
 * @Date: 2020-07-18 16:22:45gn
 * @LastEditors: XYJ
 * @LastEditTime: 2020-07-18 17:55:52
 * @Description: 1077 互评成绩计算 (20分)
 */ 

#include <iostream>

using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int tea, tmp, count = -2, min = m, max = 0;
        double sum = 0.0;
        cin >> tea;
        for (int j = 0; j < n - 1; j++)
        {
            cin >> tmp;
            if (tmp >= 0 && tmp <= m)
            {
                if (tmp <= min)
                    min = tmp;
                if (tmp >= max)
                    max = tmp;
                count++;
                sum += tmp;
            }
        }
        double score = (sum - min - max) / count;
        score = (score + tea) / 2;
        score - (int)score >= 0.5 ? score = score + 1 : score = score;
        cout << (int)score << "\n";
    }
    return 0;
}