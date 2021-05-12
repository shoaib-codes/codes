#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int  x,y,z,sum=0,ans=0;
string str;
cin>>z>>y;
int* arr=new int [z];
for (int i=0; i<z; i++){
cin>>arr[i];
}
cin>>x;
for (int i=0; i<z; i++){
if(i==y){
    continue;
}
else{
    sum+=arr[i];
}
}
int half=sum/2;
if(half==x){
    cout<<"Bon Appetit";
}
else{
    cout<<abs(half-x);
}
return 0;
}