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
     ans=x/y;
     sum=ans;
while(sum >= z) {
            ans += sum/z;
            sum = sum/z + sum%z;
        }
        cout<<ans<<endl;
        ans=0;
}
return 0;
}