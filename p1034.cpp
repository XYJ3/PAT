/**
 * 1034 有理数四则运算 (20分)
 */

#include <iostream>
#include <cmath>

using namespace std;

// 最小公约数
int fi(long long int a, long long int b)
{
    if (a == 0)
        return 1;
    return b == 0 ? a : fi(b, a % b);
}

// 化简
int to_simple(long long int a, long long int b)
{
    if (b < 0)
    {
        b *= -1;
        a *= -1;
    }

    if (b == 0)
    {
        cout << "Inf";
        return 0;
    }
    else if (a == 0)
    {
        printf("0");
        return 0;
    }

    long long int y = fi(abs(a), b);
    a /= y;
    b /= y;
    long long int az = a / b;

    if (a != 0)
    {
        if (a < 0)
            printf("(");
        if (az)
        {
            printf("%d", az);
            if (a % b != 0)
                printf(" %lld/%lld", a % b, b);
        }
        else
            printf("%lld/%lld", a % b, b);
        if (a < 0)
            printf(")");
    }

    return 0;
}

int main()
{
    long long int a1, a2, b1, b2;
    scanf("%lld/%lld %lld/%lld", &a1, &a2, &b1, &b2);
    // 加
    to_simple(a1, a2);
    cout << " + ";
    to_simple(b1, b2);
    cout << " = ";
    to_simple(a1 * b2 + a2 * b1, a2 * b2);
    printf("\n");
    // 减
    to_simple(a1, a2);
    cout << " - ";
    to_simple(b1, b2);
    cout << " = ";
    to_simple(a1 * b2 - a2 * b1, a2 * b2);
    printf("\n");
    // 乘
    to_simple(a1, a2);
    cout << " * ";
    to_simple(b1, b2);
    cout << " = ";
    to_simple(a1 * b1, a2 * b2);
    printf("\n");
    // 除
    to_simple(a1, a2);
    cout << " / ";
    to_simple(b1, b2);
    cout << " = ";
    to_simple(a1 * b2, a2 * b1);
    printf("\n");
}