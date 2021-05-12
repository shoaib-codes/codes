#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int  w,x,y,z,ans=0,k;
cin>>w>>x>>y>>z;
while(w<=z){
            ans++;
            z-=w;
            w = max(w-x,y);
}
cout<<ans;
return 0;
}