#include <iostream>

using namespace std;

long int countDigit(long int N, int Digit)
{
    int M,i;
    while(N>0)
    {
        M=N%10;
        if(M==Digit)
        i++;
        N=N/10;
    }
    return i;
}
int main()
{
    long int N;
    int Digit;
    cin>>N;
    cin>>Digit;
    cout<< countDigit(N,Digit);
    return 0;
}
