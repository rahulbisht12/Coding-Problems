#include<iostream>
using namespace std;
int binarySearch(int arr[],int N,int M){
int s=0;
int e=N;

while(s<=e){
	int mid=(s+e)/2;
	if(arr[mid]==M){
		return mid;
	}
	else if (arr[mid>M]){
		e=mid-1;
	}
	else {
		s=mid+1;
	}
}
return -1;
}
using namespace std;
int main() {
	int N,M;
	int arr[N];

	cin>>N;
	for(int i=0;i<N;i++){
		cin>>arr[i];
	}

	cin>>M;

	cout<<binarySearch(arr,N,M);
	return 0;
}
