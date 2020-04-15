/**
 * 卡拉兹(Callatz)猜想已经在1001中给出了描述。在这个题目里，情况稍微有些复杂。

    当我们验证卡拉兹猜想的时候，为了避免重复计算，可以记录下递推过程中遇到的每一个数。例如对 n=3 进行验证的时候，我们需要计算 3、5、8、4、2、1，则当我们对 n=5、8、4、2 进行验证的时候，就可以直接判定卡拉兹猜想的真伪，而不需要重复计算，因为这 4 个数已经在验证3的时候遇到过了，我们称 5、8、4、2 是被 3“覆盖”的数。我们称一个数列中的某个数 n 为“关键数”，如果 n 不能被数列中的其他数字所覆盖。

    现在给定一系列待验证的数字，我们只需要验证其中的几个关键数，就可以不必再重复验证余下的数字。你的任务就是找出这些关键数字，并按从大到小的顺序输出它们。

    输入格式：
        每个测试输入包含 1 个测试用例，第 1 行给出一个正整数 K (<100)，第 2 行给出 K 个互不相同的待验证的正整数 n (1<n≤100)的值，数字间用空格隔开。

    输出格式：
        每个测试用例的输出占一行，按从大到小的顺序输出关键数字。数字间用 1 个空格隔开，但一行中最后一个数字后没有空格。
*/

#include <stdio.h>

int flag[10000] = {0};

int deal(int n)
{
    while (n != 1)
    {
        if (n % 2 == 0)
            n /= 2;
        else
            n = (3 * n + 1) / 2;
        flag[n]++;
    }
    return 0;
}

int main()
{
    int k = 0;
    int n = 0;
    int a[100];
    int result[100];
    int ri = 0;
    int temp = 0;

    scanf("%d", &k);
    for (int i = 0; i < k - 1; i++)
    {
        scanf("%d", &a[i]);
        getchar();
        if (!flag[a[i]])
            deal(a[i]);
    }
    scanf("%d", &a[k - 1]);
    if (!flag[a[k - 1]])
        deal(a[k - 1]);
    for (int i = 0; i < k; i++)
    {
        if (!flag[a[i]])
        {
            result[ri] = a[i];
            ri++;
        }
    }

    // sort
    for (int i = 0; i < ri - 1; i++)
    {
        for (int j = 0; j < ri - 1 - i; j++)
        {
            if (result[j] < result[j + 1])
            {
                temp = result[j];
                result[j] = result[j + 1];
                result[j + 1] = temp;
            }
        }
    }

    // print
    for (int i = 0; i < ri - 1; i++)
    {
        printf("%d ", result[i]);
    }
    printf("%d", result[ri - 1]);
    return 0;
}
