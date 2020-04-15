/**
 *  1017 A除以B (20分)
 */

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string A;
    int B, R, k;
    int Q[1000], qc = 0;
    cin >> A >> B;
    for (int i = 0; i < A.length(); i++)
    {
        if (A[i] - '0' != 0)
        {
            k = i;
            break;
        }
    }
    R = A[k] - '0';
    if (R < B && A.length() - 1 == k)
    {
        cout << "0 " << R << endl;
        return 0;
    }
    while (R < B)
        R = R * 10 + (A[++k] - '0'); // 余数不断增加末位直到不小于除数
    Q[qc++] = R / B;                 //存商
    R %= B;                          // 存余
    while (++k < A.length())
    {
        R = R * 10 + (A[k] - '0');
        Q[qc++] = R / B;
        R %= B;
    }
    for (int i = 0; i < qc; i++)
        cout << Q[i];
    cout << " " << R;
    return 0;
}