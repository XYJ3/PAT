/**
 *  1011 A+B 和 C (15分)
 */

#include <iostream>
int main()
{
    using namespace std;

    int k;
    long long a, b, c;
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        cin >> a >> b >> c;
        if (a + b > c)
        {
            cout << "Case #" << i + 1 << ": "
                 << "true" << endl;
        }
        else
        {
            cout << "Case #" << i + 1 << ": "
                 << "false" << endl;
        }
    }
}