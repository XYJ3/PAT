/**
 * 1049 数列的片段和 (20分)
 */
#include<iostream>
using namespace std;
int main()
{
    int n;
    double a,b=0;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a;
        b+=a*(i+1)*(n-i);
    }
    printf("%.2f",b);
    
}