/**
 *  1016 部分A+B (15分)
 */

#include <iostream>
#include <string>
#include <cmath>
int main()
{

    using namespace std;

    string a, b;
    int da, db, count_a = 0, count_b = 0, pa = 0, pb = 0;
    cin >> a >> da >> b >> db;
    for (int i=0;i<a.length();i++)
    {
        if (a[i] - '0' == da){
            pa += da * pow(10.0,count_a);
            count_a++;
        }
            
    }

    for (char m : b)
    {
        if (m - '0' == db){
            int p=pow(10,count_b)+0.1;
            count_b++;
            pb += db*p;
        }
            
    }
    cout << pa + pb << endl;
}