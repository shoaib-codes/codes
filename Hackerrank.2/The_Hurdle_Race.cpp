#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int  x,y,z,max=0,ans=0;
string str;
cin>>x>>y;
for(int i=0; i<x; i++){
    cin>>z;
    if(z>max){
        max=z;
    }
}
if(y>=max){
    cout<<0;
}
else{
    cout<<abs(y-max);
    }
return 0;
}