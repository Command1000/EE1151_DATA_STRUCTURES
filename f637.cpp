#include <bits/stdc++.h>
using namespace std;
string s;
int ctt=0;
int func(int w){
char c=s[ctt++];	
if(c=='0'){
	return 0;
}
if (c=='1'){
	return w*w;
}
int ct=0;
for(int i=0;i<4;i++){
ct+=func(w/2);
}

return ct;
}

int main(void){
int n;
cin>>s>>n;
cout<<func(n);
	return 0;
}
