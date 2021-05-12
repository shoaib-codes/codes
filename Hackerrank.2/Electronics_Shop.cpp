#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int  x,y,z,sum=0,ans=-1;
string str;
cin>>x>>y>>z;
int *arr= new int[y];
int *arr1= new int [z];
for(int i=0; i<y; i++){
    cin>>arr[i];
}
for(int i=0; i<z; i++){
    cin>>arr1[i];
}
for(int i=0; i<y; i++){
    for(int j=0; j<z; j++){
        if(arr[i]+arr1[j]>ans && arr[i]+arr1[j]<=x ){
            ans=arr[i]+arr1[j];
        }
    }
}
cout<<ans;
return 0;
}