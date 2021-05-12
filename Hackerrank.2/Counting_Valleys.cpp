#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int  x,y=0,z=0,ans=0;
string str;
cin>>z;
cin>>str;
for(int i=0; i<z; i++){
     int k = str[i];
     if(k=='D'){
         y--;
     }
     else if (k=='U'){
         y++;
     }
     if(y==0 && k=='U'){
         ans++;
     }
}
cout<<ans;

return 0;
}