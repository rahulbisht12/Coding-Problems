#include <iostream>
#include <string>
using namespace std;
int main(){
string s;
int len,i;
cin>>s;
len=s.length();
for(i=0;i<len;i++){
	if(s[i]>='a' && s[i]<='z'){
		s[i]=s[i]-32;
	}
	else if(s[i]>='A' && s[i]<='Z'){
		s[i]=s[i]+32;
	}
}
cout<<s;
	return 0;
}
