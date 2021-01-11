#include <iostream>
using namespace std;

int linearSearch(int arr[],int N, int M){

for(int i=0;i<N;i++){
	if(arr[i]==M){
		return i;
	}
}
return -1;
}

int main(){
int N,M;
int arr[N];

cin>>N;

for(int i=0;i<N;i++){
	cin>>arr[i];
}

cin>>M;

cout<<linearSearch(arr,N,M);
return 0;
}
