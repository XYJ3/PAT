/**
 *  1021 个位数统计 (15分)
 */

#include<iostream>
#include<string>
using namespace std;
int main(){
    string N;
    int count[10]={0};
    cin>>N;
    for(char s:N){
        count[s-'0']++;
    }
    for (int i = 0; i < 10; i++)
    {
        if(count[i])
        cout<<i<<":"<<count[i]<<"\n";
    }
    return 0;
}