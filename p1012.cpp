/**
 *  1012 数字分类 (20分)
 */

#include <iostream>
#include <iomanip>
int main()
{

    using namespace std;
    int n, a1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = 0, k,m=0;
    cin >> n;
    int f = 1,count=0;
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        switch (k % 5)
        {
        case 0:
            if (k % 2 == 0)
                a1 += k;
            break;
        case 1:
        m++;
            if (f++ % 2)
            {
                a2 += k;
                break;
            }
            else
            {
                a2 -= k;
                break;
            }
        case 2:
            a3++;
            break;
        case 3:
            a4 += k;
            count++;
            break;
        case 4:
            if (k > a5)
                a5 = k;
            break;
        }
    }

    if (a1)
        cout << a1;
    else
        cout << "N";
    cout << " ";
    if (m)
        cout << a2;
    else
        cout << "N";
    cout << " ";
    if (a3)
        cout << a3;
    else
        cout << "N";
    cout << " ";
    if (a4)
        cout << fixed << setprecision(1) << ((float)a4 / count);
    else
        cout << "N";
    cout << " ";
    if (a5)
        cout << a5;
    else
        cout << "N";
}