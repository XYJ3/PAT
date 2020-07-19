/**
 * 1074 宇宙无敌加法器 (20分)
 */
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    string p, pa, pb;
    int result = 0, t = 0;
    string sum = "";
    cin >> p >> pa >> pb;
    for (int i = 1; i <= max(pa.size() + 1, pb.size() + 1); i++)
    {
        int a, b, c;
        if (i > pa.size())
            a = 0;
        else
            a = int(pa[pa.size() - i] - '0');

        if (i > pb.size())
            b = 0;
        else
            b = int(pb[pb.size() - i] - '0');
        c = int(p[p.size() - i] - '0');
        if (c == 0)
            c = 10;

        sum.append(1, ((a + b + t) % c + '0'));
        // result += ((a + b + t) % c) * (pow(10, i - 1) + 0.00001);
        (a + b + t) >= c ? t = 1 : t = 0;
    }
    // cout<<sum;
    int j = sum.size();
    while (sum[--j]=='0');
    if(j==-1)
    cout<<"0";
else
{
    for (int i = j; i >=0; i--)
    {
        cout<<sum[i];
    }
    
}
    return 0;
}