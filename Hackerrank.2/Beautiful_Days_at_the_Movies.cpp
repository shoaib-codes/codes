#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
long long x,y,z,ans=0,rn=0; 
cin>>x>>y>>z;
for(int i=x; i<=y; i++){
 while(i>0) {
        rn = rn*10 + i%10;
        i /= 10;
    }
    if(abs(x-rn)%z==0){
        ans++;
    }
rn=0;
}
    cout<<ans;
return 0;
}