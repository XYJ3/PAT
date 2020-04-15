/**
 * 1008 数组元素循环右移问题
 */

#include <iostream>

int main()
{

    using namespace std;

    int N, M, a[100];
    cin >> N >> M;
    for (int i = M%N; i < N; i++)
        cin >> a[i];
    for (int i = 0; i < M%N; i++)
        cin >> a[i];
    for (int i = 0; i < N - 1; i++)
        cout << a[i] << " ";
    cout << a[N - 1] << endl;
    return 0;
}