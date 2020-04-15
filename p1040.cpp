/**
 * 1040 有几个PAT (25分)
 */
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    int count_p = 0, count_t = 0, count_a = 0;
    int result = 0;
    cin >> s;
    for (char c : s)
        if (c == 'T')
            count_t++;
    for (char c : s)
        switch (c)
        {
        case 'P':
            count_p++;
            break;
        case 'T':
            count_t--;
            break;
        case 'A':
            result = (result + (count_t * count_p) % 1000000007) % 1000000007;
        }
    cout << result;
}