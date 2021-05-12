#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int  x,y,z,t,sum=0,ans=0;
string str;
cin>>t;
while(t--){
   cin>>x>>y>>z;
   if((y+z-1)%x==0){
       cout<<x<<endl;
   }  
   else {
       cout<<(y+z-1)%x<<endl;
   }
}
return 0;
}