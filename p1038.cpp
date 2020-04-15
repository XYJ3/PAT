/**
 * 1038 统计同成绩学生 (20分)
 */
#include <iostream>
using namespace std;
int main()
{
    int n, k, score;
    int count[101] = {0};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        if (i)
            getchar();
        scanf("%d", &score);
        count[score]++;
    }
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        cin >> score;
        if (i)
            printf(" ");
        printf("%d", count[score]);
    }
}