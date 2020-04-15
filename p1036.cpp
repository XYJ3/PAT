#include <iostream>
using namespace std;
int main()
{
    int n, h;
    char c;
    cin >> n >> c;
    h = (float)n / 2 + 0.5;
    for (int i = 0; i < h; i++)
    {
        cout<<c;
        for (int j = 1; j < n-1; j++)
        {
            (i == 0 || i == h - 1)?cout<<c:cout<<" ";
        }
        cout<<c<<endl;
    }
}