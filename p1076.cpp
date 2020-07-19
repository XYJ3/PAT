#include <iostream>

int main()
{
    using namespace std;
    int n;
    cin>>n;
    getchar();
    for (int i = 0; i < n; i++)
    {
        string s;
        char r[30];
        cin.getline(r,100);
        s=r;
        cout << s[s.find_first_of('T') - 2] - 'A' + 1;
    }
}