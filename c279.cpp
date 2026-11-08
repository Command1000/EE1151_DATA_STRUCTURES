#include <bits/stdc++.h>
using namespace std;
int main(void){
int ct=0;
string hit[9][5];
queue<bool> base;
for(int i=0;i<3;i++){
base.push(false);
}
for(int i=0;i<9;i++){
	int n;
	cin>>n;
	for(int j=0;j<n;j++){
		cin>>hit[i][j];
	}
}
int limit;
cin>>limit;
int out=0;
for(int game=0;game<5;game++){
	for(int player=0;player<9;player++){
		int step=0;
		if(hit[player][game]=="1B") step=1;
		if(hit[player][game]=="2B") step=2;
		if(hit[player][game]=="3B") step=3;
		if(hit[player][game]=="HR") step=4;
			
	for(int k=0;k<step;k++){
		base.push(k==0);
		ct+=base.front();
		base.pop();
	}

	if(step==0){
		limit--;
		out++;
		if(limit==0){
			cout<<ct<<'\n';
			return 0;
		}
		if(out==3){
			for(int i=0;i<3;i++){
			base.push(false);
			base.pop();
			}
		out=0;
		}
	}
	}
}
	return 0;
}
