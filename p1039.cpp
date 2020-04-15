/**
 * 1039 到底买不买 (20分)
 */
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a, b;
    int lack = 0, a_count[129] = {0};
    cin >> a >> b;
    for (char c : a)
        a_count[c]++;
    for (char d : b)
    {
        if (a_count[d] > 0)
            a_count[d]--;
        else
            lack++;
    }
    if (lack)
        cout << "No " << lack;
    else
        cout << "Yes " << a.length() - b.length();
}