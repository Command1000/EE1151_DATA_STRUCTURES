#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;
int main(void){
int n;
cin>>n;
vector<pair<int,int>> fo(n);
for(int i=0;i<n;i++){
cin>>fo[i].f>>fo[i].s;
}
sort(fo.begin(),fo.end());
vector<int> line;
for(auto x:fo){
if(line.empty()||x.s>=line.back()){
	line.push_back(x.s);
}
else{
	line[upper_bound(line.begin(),line.end(),x.s)-line.begin()]=x.s;
}

}
cout<<line.size();
	return 0;
}
