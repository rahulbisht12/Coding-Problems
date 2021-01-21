#include <iostream>
using namespace std;
int main(){
	string s;
	int len,i;
	int flag=0;
	cin>>s;
len=s.length();
	for(i=0;i<len;i++){
		if(s[i] != s[len-i-1]){
			flag=1;
			break;
		}
	}
	if(flag){
		cout<<"NO";
	}
	else{
		cout<<"YES";
	}
	return 0;
}
