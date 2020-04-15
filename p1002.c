
/**
 * 1002 写出这个数 (20分)
 * 读入一个正整数 n，计算其各位数字之和，用汉语拼音写出和的每一位数字。

    输入格式：
    每个测试输入包含 1 个测试用例，即给出自然数 n 的值。这里保证 n 小于 10^100。

    输出格式：
    在一行内输出 n 的各位数字之和的每一位，拼音数字间有 1 空格，但一行中最后一个拼音数字后没有空格。
**/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    char n[100];
    int sum = 0;
    char *pinyin[] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
    int a[100];
    int count = 0;
    scanf("%s", &n);
    int i = 0;
    while (n[i])
    {
        sum += n[i]-48;
        i++;
    }

    while (sum >= 1)
    {
        a[count++] = sum % 10;
        sum /= 10;
    }
    for (int j = count - 1; j > 0; j--)
    {
        printf("%s ", pinyin[a[j]]);
    }
    printf("%s", pinyin[a[0]]);
    return 0;
}
