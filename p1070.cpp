/**
 * 1070 结绳 (25分)
 */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n, tmp;
    vector<int> v;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        v.push_back(tmp);
    }
    sort(v.begin(), v.end());
    double sum = v[0];
    for (int i = 1; i < v.size(); i++)
        sum = (sum + v[i]) / 2;

    cout << (int)sum;
}