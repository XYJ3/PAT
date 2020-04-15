/**
 *  1007 素数对猜想 (20分)
 */

#include <stdio.h>
#include <time.h>
#include <math.h>
int main()
{

    int k = 0;
    int count = 0;
    scanf("%d", &k);
    // clock_t t = clock();
    int s;
    for (int i = 3; i <= k; i += 2)
    {
        int f = 1;
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                f = 0;
                break;
            }
        }
        if (f)
        {
            if (i - s == 2)
                count++;
            s = i;
        }
    }

    // printf("%d %lfms", count, (float)(clock() - t));
    printf("%d", count);
    return 0;
}