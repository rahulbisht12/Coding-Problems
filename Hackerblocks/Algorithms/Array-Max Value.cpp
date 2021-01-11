#include<iostream>
using namespace std;

int maxValue(int arr[],int N){

for(int i=0;i<N;i++){
	if(arr[0]<arr[i])
	arr[0]=arr[i];
}
return arr[0];
}

int main() {
	int N;
	int arr[N];

	cin>>N;

	for(int i=0;i<N;i++){
		cin>>arr[i];
	}
	cout<<maxValue(arr,N);
	return 0;
}
