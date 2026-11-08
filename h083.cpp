#include <bits/stdc++.h>
using namespace std;

int main(void){
int n;
cin>>n;
vector<string> vs(n);
unordered_set<string> st;
for(int i=0;i<n;i++){
cin>>vs[i];
st.insert(vs[i]);
}
int ct=0;
for(auto ss:vs){
	int len=ss.length();
	for(int i=1;2*i<len;i++){
		if(ss.substr(0,i)==ss.substr(len-i)){
			string mid=ss.substr(i,len-2*i);
			if(st.count(mid)){
				ct++;
			}
		}
	
	}

}
cout<<ct;
        return 0;
}
