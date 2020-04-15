/**
 *  1024 科学计数法 (20分)
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string A;
    int e, z = 0;
    cin >> A;
    if (A[0] == '-')
        cout << '-';
    e = A.find('E');
    for (int i = e + 2; i < A.length(); i++)
    {
        z = z * 10 + (A[i] - '0');
    }
    if (A[e + 1] == '+')
    {
        if (2 + z < e)
        {
            for (int i = 1; i < e; i++)
            {
                if (A[i] != '.')
                    cout << A[i];
                if (i == 2 + z && i != e - 1)
                    cout << '.';
            }
        }
        else
        {
            for (int i = 1; i < e; i++)
                if (i != 2)
                    cout << A[i];
            for (int i = 0; i < z - e + 3; i++)
                cout << "0";
        }
    }
    else
    {
        for (int i = 0; i < z; i++)
        {
            cout << '0';
            if (i == 0)
                cout << ".";
        }
        for (int i = 1; i < e; i++)
            if (i != 2 || z == 0)
                cout << A[i];
    }
}