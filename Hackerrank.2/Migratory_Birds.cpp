#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int  x,y,z,sum=0,ans=0;
cin>>z;
int arr[5]={0};
for(int i=0; i<z; i++){
    cin>>x;
    arr[x-1]++;
}
for(int i=0; i<5; i++){
    if(arr[i]>ans){
        ans=arr[i];
        sum=i;
    }
}
cout<<sum+1;
return 0;
}
