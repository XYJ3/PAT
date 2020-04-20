/**
 * 1055 集体照 (25分)
 */
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct people
{
    string name;
    int height;
};

bool comp(people a, people b)
{
    if (a.height == b.height)
        return (a.name < b.name);
    return (a.height > b.height);
}

int main()
{
    int n, k;
    vector<people> p;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        people temp;
        cin >> temp.name >> temp.height;
        p.push_back(temp);
    }
    sort(p.begin(), p.end(), comp);
    int count = 0;
    people pp[10001];
    for (int i = 0; i < k; i++)
    {
        int per = n / k, m;
        if (i == 0)
            per += n % k;
        m = per / 2 + 1;
        pp[m] = p[count++];
        for (int j = 1; j < m; j++)
        {
            // 这里假设你面对拍照者，所以你的左边是中间人的右边
            if (m - j > 0) // 右边
                pp[m - j] = p[count++];
            if (m + j <= per) // 左边
                pp[m + j] = p[count++];
        }
        for (int j = 0; j < per; j++)
        {
            if (j)
                printf(" ");
            printf("%s", pp[j + 1].name.c_str());
        }
        printf("\n");
    }
}