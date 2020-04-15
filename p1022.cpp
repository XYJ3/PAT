/**
 *  1022 D进制的A+B (20分)
 */

#include <iostream>
using namespace std;
int main()
{
    int A, B, D, sum, result[1000], count = 0;
    cin >> A >> B >> D;
    sum = A + B;
    if (sum == 0)
        cout << "0";
    while (sum > 0)
    {
        result[count++] = sum % D;
        sum /= D;
    }
    for (int i = count - 1; i >= 0; i--)
    {
        cout << result[i];
    }
}