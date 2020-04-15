/**
 *  1019 数字黑洞 (20分)
 */

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool comp(char a, char b)
{
    return a > b;
}

int main()
{
    string N;
    cin >> N;
    
    string x, y;
    while (1)
    {
        if (N.length() != 4){
            int a=N.length();
            for (int i = 0; i < 4 - a; i++)
            {
                N.insert(0, "0");
            }
        }
        sort(N.begin(), N.end(), comp);
        x = N;
        sort(N.begin(), N.end());
        y = N;

        N = to_string(stoi(x) - stoi(y));
        
        printf("%04d - %04d = %04d\n",stoi(x),stoi(y),stoi(N));
        if (N == "0"||N=="6174")
            break;
    }
    return 0;
}