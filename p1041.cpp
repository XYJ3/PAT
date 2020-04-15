/**
 * 1041 考试座位号 (15分)
 */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct examinee
{
    long long id; // 准考证号
    int test;     // 试机座位号
    int seat;     // 考试座位号
};

bool comp(examinee a, examinee b)
{
    return a.test < b.test;
}

int main()
{
    int n, m;
    examinee exam[1000];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> exam[i].id >> exam[i].test >> exam[i].seat;
    sort(exam, exam + n, comp);
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int temp;
        cin >> temp;
        for (int j = 0; j < n; j++)
        {
            if (exam[j].test == temp)
            {
                cout << exam[j].id << " " << exam[j].seat << "\n";
                break;
            }
        }
    }
}