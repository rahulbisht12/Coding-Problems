#include<iostream>
using namespace std;
int fact(int N)
{
int i;
int f=1;
for(i=N;i>0;i--)
{
	f=f*i;
}
return f;
}
int main()
{
	int N;
	cin>>N;
cout<< fact(N);
return 0;
}
