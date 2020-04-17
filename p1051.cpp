/**
 * 1051 复数乘法 (15分)
 */

#include <iostream>
#include <cmath>
int main()
{
    double a, b, c, d, z, x;
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
    z = a * c * cos(b + d);
    x = a * c * sin(b + d);
    if (fabs(z) < 0.005)
        z = 0;
    if (fabs(x) < 0.005)
        x = 0;
    if (x >= 0)
        printf("%.2f+%.2fi", z, x);
    else
        printf("%.2f%.2fi", z, x);
}