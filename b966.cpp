#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;
int main(void){
int n;
cin>>n;
vector<pair<int,int>> vp(n);
for(int i=0;i<n;i++){
cin>>vp[i].f>>vp[i].s;
}
sort(vp.begin(),vp.end());
int l=-1,r=-1,ct=0;

for(auto seg:vp){
	if(seg.f>r){
	ct+=(r-l);
	r=seg.s;
	l=seg.f;
	}
	else{
	r=max(seg.s,r);
	}
}
ct+=r-l;
cout<<ct;
return 0;
}
