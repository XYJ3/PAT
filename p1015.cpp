/**
 *  1015 德才论 (25分)
 * 
 * 本题需要大量的IO，故C++一般使用STL的sort和关闭输入输出同步的语句，
 * 还有endl耗时过长，会超时，一般用’\n’或“\n”替代
 */

#include <iostream>
#include <algorithm>

using namespace std;

struct student
{
    int id;
    int d_score;
    int c_score;
};

bool compare(student a, student b)
{
    if (a.c_score + a.d_score == b.c_score + b.d_score) // 总分相同
    {
        if (a.d_score == b.d_score) // 德分相同，按学号升序
            return a.id < b.id;
        else // 德分不同，按德分降序
            return a.d_score > b.d_score;
    }
    else
        return a.d_score + a.c_score > b.c_score + b.d_score;
}

void print_student(student *student, int count)
{
    for (int i = 0; i < count; i++)
    {
        cout << (student + i)->id << " " << (student + i)->d_score << " " << (student + i)->c_score << "\n";
    }
}

int main()
{
    student one[100000], two[100000], three[100000], four[100000], s;
    int N, L, count = 0, H, one_count = 0, two_count = 0, three_count = 0, four_count = 0;
    cin >> N >> L >> H;
    for (int i = 0; i < N; i++)
    {
        cin >> s.id >> s.d_score >> s.c_score;
        if (s.d_score >= L && s.c_score >= L)
        {
            if (s.d_score >= H)
                if (s.c_score >= H) // 才德全尽
                    one[one_count++] = s;
                else // 德胜才
                    two[two_count++] = s;

            else
                s.d_score >= s.c_score ? three[three_count++] = s : four[four_count++] = s;
            count++;
        }
    }

    cout << count << "\n";
    sort(one, one + one_count, compare);
    print_student(one, one_count);
    sort(two, two + two_count, compare);
    print_student(two, two_count);
    sort(three, three + three_count, compare);
    print_student(three, three_count);
    sort(four, four + four_count, compare);
    print_student(four, four_count);
    return 0;
}