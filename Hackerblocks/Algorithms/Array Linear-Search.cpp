#include<iostream>
using namespace std;
int linearSearch(int arr[],int long N,int long M)
{
	for(int i=0;i<N;i++)
	{
		if(arr[i]==M)
		{
			return i;
		}
	}
return -1
}
int main() {
	int long N;
	cin>>N;
	int arr[N];
	for(int i=0;i<N;i++)
	{
		cin>>arr[i];
	}
	int long M;
	cin>>M;

	cout<<(arr,N,M);
	return 0;
}
