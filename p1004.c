/**
 *  读入 n（>0）名学生的姓名、学号、成绩，分别输出成绩最高和成绩最低学生的姓名和学号。

    输入格式：
    每个测试输入包含 1 个测试用例，格式为

        第 1 行：正整数 n
        第 2 行：第 1 个学生的姓名 学号 成绩
        第 3 行：第 2 个学生的姓名 学号 成绩
        ... ... ...
        第 n+1 行：第 n 个学生的姓名 学号 成绩

    其中姓名和学号均为不超过 10 个字符的字符串，成绩为 0 到 100 之间的一个整数，这里保证在一组测试用例中没有两个学生的成绩是相同的。

    输出格式：
        对每个测试用例输出 2 行，第 1 行是成绩最高学生的姓名和学号，第 2 行是成绩最低学生的姓名和学号，字符串间有 1 空格。
*/

#include <stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    int n = 0;
    char studentMAx[2][11];
    char studentMin[2][11];
    int max = 0, min = 100;

    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++)
    {
        int score = 0;
        char student[2][11];
        scanf("%s %s %d", student[0], student[1], &score);
        if (score >= max)
        {
            max = score;
            strcpy(studentMAx[0],student[0]);
            strcpy(studentMAx[1],student[1]);
        }
        if (score <= min)
        {
            min = score;
            strcpy(studentMin[0],student[0]);
            strcpy(studentMin[1],student[1]);
        }

        getchar();
    }

    printf("%s %s\n", studentMAx[0], studentMAx[1]);
    printf("%s %s\n", studentMin[0], studentMin[1]);

    return 0;
}
