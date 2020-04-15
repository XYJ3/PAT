/**
 *  1020 月饼 (25分)
 *  库存与总价可能为小数，卡点2
 */

#include <iostream>
#include <algorithm>
using namespace std;

struct moon
{
    double stock;
    double total_price;
};

bool comp(moon m, moon n)
{
    return (m.total_price) / m.stock > (n.total_price) / n.stock;
}

int main()
{
    moon m[1000];
    int N, D;
    double p = 0.0, count = 0.0;
    cin >> N >> D;
    for (int i = 0; i < N; i++)
        cin >> m[i].stock;
    for (int i = 0; i < N; i++)
        cin >> m[i].total_price;
    for (int i = 0; i < N; i++)

        sort(m, m + N, comp);
    for (int i = 0; i < N; i++)
    {
        if (count < D)
        {
            count += m[i].stock;
            if (count <= D)
            {
                p += m[i].total_price;
            }
            else
            {
                p += (m[i].total_price / m[i].stock) * (D - count + m[i].stock);
            }
        }
    }
    printf("%.2f", p);
}
