#include <bits/stdc++.h>
using namespace std; 
int main(void){
int n,P,L,R;

cin>>n>>P>>L>>R;
vector<int>S(n);
vector<int>dis(n,-1);
for(int i=0;i<n;i++){
cin>>S[i];
}
if(P==0){
	cout<<0<<'\n';
	return 0;
}

queue<int> q;
q.push(0);
dis[0]=0;
int move[2]={-L,R};
while(!q.empty()){
	int s=q.front();
	q.pop();


	for(int i=0;i<2;i++){
		int next=s+move[i];
		if(next<0||next>=n){
			continue;
		}
	
		next=S[next];
		if(next<0||next>=n){
			continue;
		}
		if(dis[next]!=-1){
			continue;
		}
		dis[next]=dis[s]+1;
		if(next==P){
			cout<<dis[next];
			return 0;
		}
		q.push(next);
	}

}
cout<<-1<<'\n';

	return 0;
}
