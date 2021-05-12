#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int  x,y,z,sum=0,ans=0;
cin>>z;
ans=z-1;
for(int i=0; i<z; i++){
    for(int j=0; j<z; j++){
if(j<ans){
    cout<<" ";
}
else{
    cout<<"#";
}
    }
    ans--;
    cout<<endl;
}
return 0;
}