#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int  x,y,z,sum=0,ans=0;
string str;
cin>>x>>y;
int * arr=new int[x];
for(int i=0; i<x; i++){
    cin>>arr[i];
}
for(int i=0; i<x; i++){
    for(int j=i+1; j<x; j++){
    if((arr[i]+arr[j])%y==0){
        ans++;
    }
}
}
cout<<ans;
return 0;
}