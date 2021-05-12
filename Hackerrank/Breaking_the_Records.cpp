#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int  x,y,z,sum=0,ans=0,max=-1000,min=1000;
string str;
cin>>z;
int* arr= new int [z];
for(int i=0;i<z;i++){
    cin>>arr[i];
}
max=arr[0],min=arr[0];
for(int i=1; i<z; i++){
    if(arr[i]>max){
        sum++;
        max=arr[i];
    }
     if(arr[i]<min){
        ans++;
        min=arr[i];
    }
}
cout<<sum<<" "<<ans;
return 0;
}