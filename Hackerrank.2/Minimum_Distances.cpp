#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int  x,y,z,sum=0,ans=1002;
string str;
cin>>z;
int *arr =new int[z];
for(int i=0; i<z; i++){
    cin>>arr[i];
}
 for(int i=0; i<z; i++){
     for(int j=i+1; j<z; j++){
         if(arr[i]==arr[j] && abs(i-j)<ans){
             ans=abs(i-j);
         }
     }
 }
 if(ans==1000){
     cout<<-1;
 }
else{
    cout<<ans;
}
return 0;
}