#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int  x,y,z,ans=0,sum=0;
cin>>z;
int *arr= new int [z];
for(int i=0; i<z; i++){
    cin>>arr[i];
}
cin>>x>>y;
for(int i=0; i<z; i++){
    for(int j=i; j<i+y; j++){
    sum+=arr[j];
    }
    if(sum==x){
        ans++;
    }
    sum=0;
}
cout<<ans;
return 0;
}