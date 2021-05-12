#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int  x,y,z,sum=0,ans=0;
string str;
cin>>x>>y;
if(x%2==0){
cout<<min(y/2,((x-y+1)/2));
}
else{
    cout<<min(y/2,(x-y)/2);
}

return 0;
}