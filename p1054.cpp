/**
 * 1054 求平均值 (20分)
 */
#include <iostream>
using namespace std;

bool check(string s)
{
    int pcount = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (i == 0 && s[i] == '-' && s.length() > 1 && s[i + 1] != '.')
            continue;
        if (isdigit(s[i]))
            continue;
        if (s[i] == '.' && i >= s.length() - 3)
        {
            pcount++;
            if (pcount > 1)
                return false;
            continue;
        }
        return false;
    }
    if (stof(s) > 1000 || stof(s) < -1000)
        return false;
    return true;
}

int main()
{
    int n, k = 0;
    double sum = 0.0;
    string s;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (check(s))
        {
            k++;
            sum += stof(s);
        }
        else
            printf("ERROR: %s is not a legal number\n", s.c_str());
    }
    if (k == 0)
        printf("The average of 0 numbers is Undefined\n");
    else if (k == 1)
        printf("The average of 1 number is %.2f\n", sum / k);
    else
        printf("The average of %d numbers is %.2f\n", k, sum / k);
}