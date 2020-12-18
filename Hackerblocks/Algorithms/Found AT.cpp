#include <iostream>

using namespace std;

int main()
{
    int N,M,arr[100],i,c=-1;
    cin>>N;
    for(i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    cin>>M;
    for(i=0;i<N;i++)
    {
        if(arr[i]==M)
        {
            cout<< i;
            break;
        }
    }
    if(i==N)
    {
        cout<<-1;
    }
    return 0;
}
