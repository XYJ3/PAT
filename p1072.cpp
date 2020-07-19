/**
 * 1072 开学寄语 (20分)
 */
#include <iostream>
using namespace std;

int main()
{
    int n, m, s[10000] = {0}, tmp, sc = 0, wc = 0;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> tmp;
        s[tmp] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        string name;
        int k, count = 0;
        cin >> name >> k;
        for (int j = 0; j < k; j++)
        {
            cin >> tmp;
            if (s[tmp] == 1)
            {
                count++;
                if (count == 1)
                    cout << name << ":";
                printf(" %04d", tmp);
            }
        }

        if (count > 0)
        {
            wc += count;
            sc++;
            cout << "\n";
        }
    }
    cout << sc << " " << wc << endl;
}