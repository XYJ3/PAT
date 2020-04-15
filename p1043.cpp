/**
 * 1043 输出PATest (20分)
 */
#include <iostream>

using namespace std;

int main()
{
    char c;
    int count_P = 0, count_A = 0, count_T = 0, count_e = 0, count_s = 0, count_t = 0;
    c = getchar();
    while (c != '\n')
    {
        switch (c)
        {
        case 'P':
            count_P++;
            break;
        case 'A':
            count_A++;
            break;
        case 'T':
            count_T++;
            break;
        case 'e':
            count_e++;
            break;
        case 's':
            count_s++;
            break;
        case 't':
            count_t++;
            break;
        }
        c = getchar();
    }
    for (int i = 0; i < 10000; i++)
    {
        if (count_P-- > 0) printf("P");
        if (count_A-- > 0) printf("A");
        if (count_T-- > 0) printf("T");
        if (count_e-- > 0) printf("e");
        if (count_s-- > 0) printf("s");
        if (count_t-- > 0) printf("t");
    }
}