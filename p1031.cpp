/**
 * 1031 查验身份证 (15分)
 */

#include <iostream>
#include <string>
using namespace std;

int main()
{
    char m[11] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
    int count = 0, N, z = 0;
    int weight[17] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
    string a[100], temp;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        z = 0;
        int f = 0;
        for (int j = 0; j < 17; j++)
        {
            if (temp[j] > '9' || temp[j] < '0')
            {
                f = 1;
                a[count++] = temp;
                break;
            }
            z += (temp[j] - '0') * weight[j];
        }
        z %= 11;
        if (temp[17] != m[z] && f == 0)
        {
            a[count++] = temp;
        }
    }
    if (count)
        for (int i = 0; i < count; i++)
            cout << a[i] << endl;
    else
        cout << "All passed\n";

    return 0;
}