/**
 * 1053 住房空置率 (20分)
 */

#include <iostream>
using namespace std;
int main()
{
    int k, d, mayfree = 0, free = 0;
    float e;
    cin >> k >> e >> d;
    for (int i = 0; i < k; i++)
    {
        int day, count = 0;
        float pe;
        cin >> day;
        for (int j = 0; j < day; j++)
        {
            cin >> pe;
            if (pe < e)
                count++;
        }
        if (count > day / 2)
        {
            if (day > d)
            {
                free++;
                continue;
            }
            mayfree++;
        }
    }
    printf("%.1f%% %.1f%%\n", (float)mayfree * 100 / k, (float)free * 100 / k);
}