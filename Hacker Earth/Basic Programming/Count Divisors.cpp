#include <iostream>
using namespace std;
int main(){
	int l,r,k;
	int count=0;
	cin>>l>>r>>k;

	for(;l<=r;l++){
		if(l%k==0){
			count++;
		}
	}
	cout<<count;
	return 0;
}
