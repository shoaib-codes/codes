#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int  x,y,z,max=-100,ans=0;
string str;
cin>>z;
int* arr = new int [z];
for(int i=0; i<z; i++){
    cin>>arr[i];
if(arr[i]>max){
    max=arr[i];
}
}
for(int i=0; i<z; i++){
    if(arr[i]==max){
        ans++;
    }
}
cout<<ans;
return 0;
}