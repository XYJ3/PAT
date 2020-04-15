/**
 * 1046 划拳 (15分)
 */

#include <iostream>
using namespace std;

int main()
{
    int n, a1, a2, b1, b2, count_a = 0, count_b = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a1 >> a2 >> b1 >> b2;
        if (a1 + b1 == a2 && a2 == b2)
            continue;
        if (a1 + b1 == a2)
            count_b++;
        if (a1 + b1 == b2)
            count_a++;
    }
    cout << count_a << " " << count_b << endl;
}