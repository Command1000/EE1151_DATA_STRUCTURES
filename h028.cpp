#include<bits/stdc++.h>
using namespace std;

int main(void){

int n;
long long l;
long long ct=0,high=0;
cin>>n>>l;
stack<pair<long long,long long>> s;
long long x[100005],h[100005];
for(int i=1;i<=n;i++) cin>>x[i];
for(int i=1;i<=n;i++) cin>>h[i];
x[0]=0;
h[0]=LLONG_MAX;
x[n+1]=l;
s.push({x[0],h[0]});

for(int i=1;i<=n;i++){
	if(x[i]-h[i]>=s.top().first||x[i]+h[i]<=x[i+1]){
		ct++;
		high=max(h[i],high);
	while(s.top().first+s.top().second<=x[i+1]){
		ct++;
		high=max(s.top().second,high);
		s.pop();

	}

	}
	else{
	s.push({x[i],h[i]});
	}
}
cout<<ct<<'\n'<<high;

	return 0;
}
