#include <bits/stdc++.h>
using namespace std;
int main(void){
int n,t;

cin>>n>>t;

vector<long long> v;
long long ct=0;

for(int i=0;i<n;i++){
long long x;
cin>>x;

while(!v.empty()&&x>=v.back()){
x+=v.back();
ct+=v.back();
v.pop_back();	
}
if(x<=t){
v.push_back(x);
}
}

while(!v.empty()){
	ct+=v.back();
	v.pop_back();
}
cout<<ct;
}






	return 0;
}
