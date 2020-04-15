#include <iostream>
using namespace std;
int main()
{
    int pg, ps, pk, ag, as, ak, p, a, z;
    scanf("%d.%d.%d %d.%d.%d", &pg, &ps, &pk, &ag, &as, &ak);
    p = pg * 17 * 29 + ps * 29 + pk;
    a = ag * 17 * 29 + as * 29 + ak;
    z = a - p;
    if (z < 0)
    {
        cout << "-";
        z *= -1;
    }
    int zg = z /(17 * 29);
    int za = (z - zg * (17 * 29)) / 29;
    int zk = z - zg * (17 * 29) - za * 29;
    printf("%d.%d.%d", zg, za, zk);
}