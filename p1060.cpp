/**
 * 1060 爱丁顿数 (25分)
 */

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> re(n);
    for (int i = 0; i < n; i++)
        cin >> re[i];
    sort(re.begin(), re.end());
    for (int i = 0; i < n; i++)
        if (re[i] > n - i)
        {
            cout << n - i;
            return 0;
        }
    cout << 0;
    return 0;
}