#include <bits/stdc++.h>
using namespace std;

int func(){
string s;
cin>>s;
if(s=="f"){
int x=func();
return 2*x-3;
}
else if(s=="g"){
int x=func();
int y=func();
return 2*x+y-7;
}
else if(s=="h"){
int x=func();
int y=func();
int z=func();
return 3*x-2*y+z;
}
else{
return stoi(s);
}

}

int main(void){
cout<<func();
return 0;
}
