#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int  x,y,z,max=0,ans=0;
cin>>z;
int arr1[102]={0};
int *arr= new int [z];
for(int i=0; i<z; i++){
    cin>>arr[i];
    arr1[arr[i]]++;
    if(arr1[arr[i]]>max){
        max=arr1[arr[i]];
        y=arr[i];
    }

}
for(int i=0; i<z; i++){
    if(arr[i]!=y){
        ans++;
    }
}
cout<<ans;
return 0;
}