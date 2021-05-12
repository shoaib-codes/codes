#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int  x,y,z,sum=0,ans=0;
string str;
cin>>z;
int arr[100]={0};
    for(int i = 0;i<z;i++){
        cin>>x;
        arr[x]++;
    }
    for(int i = 0;i<z-1;i++){
        if(arr[i]+arr[i+1]> ans){
             ans = arr[i]+arr[i+1];
        }
    }
    cout<<ans;
return 0;
}