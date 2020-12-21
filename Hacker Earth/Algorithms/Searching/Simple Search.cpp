#include<iostream>
using namespace std;
int main()
{
    int N,arr[10000],K,i;
    cin>>N;
    for(i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    cin>>K;
    for(i=0;i<N;i++)
    {
        if(arr[i]==K)
        cout<<i;
    }
    return 0;
}
