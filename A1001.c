#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int printSum(char *s, int start, int end)
{
    for (int i = start; i < end; i++)
    {
        printf("%c", s[i]);
    }
    return 0;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int sum = a + b;
    int num[10];
    char sumStr[10];
    // itoa(sum, sumStr, 10);		            // Unix版本：itoa()在头文件<stdlib.h>中不存在
	sprintf(sumStr, "%d", sum);		// 使用sprintf将整数转换成字符串
    int length = strlen(sumStr);
    if (length > 6)
    {
        int m;
        if (sum > 0)
        {
            m = length % 3;
            printSum(sumStr, 0, m);
            printf(",");
            printSum(sumStr, m, m + 3);
            printf(",");
            printSum(sumStr, m + 3, m + 6);
        }
        else
        {
            m = length % 3;
            printSum(sumStr, 0, m);
            if (m - 1 != 0)
            {
                printf(",");
            }
            printSum(sumStr, m, m + 3);
            printf(",");
            printSum(sumStr, m + 3, m + 6);
        }
    }
    else if (length > 3)
    {
        if (sum > 0)
        {
            printSum(sumStr, 0, length - 3);
            printf(",");
            printSum(sumStr, length - 3, length);
        }
        else
        {
            printSum(sumStr, 0, length - 3);
            if (length == 4)
            {
                printSum(sumStr, length-3, length);
            }
            else
            {
                printf(",");
                printSum(sumStr, length - 3, length);
            }
        }
    }else
    {
        printSum(sumStr, 0, length);
    }
    

    return 0;
}
