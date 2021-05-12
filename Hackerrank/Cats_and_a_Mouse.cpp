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
 if(abs(x-z)==abs(y-z)){
    cout<<"Mouse C";
 }
 else if(abs(x-z)>=abs(y-z)){
     cout<<"Cat B";
 }
 else{
     cout<<"Cat A";
 }
 cout<<endl;
}
return 0;
}