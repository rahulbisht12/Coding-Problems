#include <iostream>
using namespace std;
int main(){
	int N,L,W,H;
	cin>>L;
	cin>>N;

	while(N--){
		cin>>W>>H;
		if(L>W || L>H){
			cout<<"UPLOAD ANOTHER"<<endl;
		}else if(L<=W || L<=H){
			if(W==H){
				cout<<"ACCEPTED"<<endl;
			}else{
				cout<<"CROP IT"<<endl;
			}
		}
	}
	return 0;
}
