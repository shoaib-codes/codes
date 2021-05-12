#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int  x,y,z,sum=0,ans=0;
string str;
cin>>z;
x=5;
for(int i=0; i<z; i++){
    ans+=floor(x/2);
    x=3*floor(x/2);
}
cout<<ans;
return 0;
}