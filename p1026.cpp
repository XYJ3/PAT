/**
 *  1026 程序运行时间 (15分)
 */

#include <iostream>
using namespace std;
int main()
{
    double c1, c2;
    cin>>c1>>c2;
    int s = 0, h = 0, m = 0;
    s = (((c2 - c1) / 100) * 2 + 1) / 2;
    h = s / (60 * 60);
    s = s % (60 * 60);
    m = s / 60;
    s = s % 60;
    printf("%.2d:%.2d:%.2d", h, m, s);
}