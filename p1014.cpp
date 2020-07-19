/**
 *  1014 福尔摩斯的约会 (20分)
 */
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a, b, c, d;
    int flag = 0;
    string z[7] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
    cin >>
        a >> b >> c >> d;
    for (int i = 0; i < a.length(); i++)
    {
        if (!flag && a[i] <= 'G' && a[i] >= 'A' && a[i] == b[i])
        {
            cout << z[a[i] - 'A'] << " ";
            flag++;
        }
        else if (flag && a[i] == b[i])
        {
            if (a[i] >= 'A' && a[i] <= 'N')
            {
                cout << 10 + a[i] - 'A' << ":";
                break;
            }
            else if (a[i] >= '0' && a[i] <= '9')
            {
                cout << 0 << a[i] << ":";
                break;
            }
        }
    }

    for (int i = 0; i < c.length(); i++)
    {
        // cout<<c[i]<<" "<<d[i]<<endl;
        if (((c[i] >= 'A' && c[i] <= 'Z') || (c[i] >= 'a' && c[i] <= 'z')) && c[i] == d[i])
        {
            i < 10 ? cout << 0 << i << endl : cout << i << endl;
            return 0;
        }
    }
}