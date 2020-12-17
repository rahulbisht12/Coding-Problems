#include<iostream>
using namespace std;
int main()
{
	int N,i,flag=0;
	cin>>N;
	for(i=2;i<=N/2;i++)
	{
		if(N%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	cout<<"Prime";
	else
	cout<<"Not Prime";
	return 0;
}
