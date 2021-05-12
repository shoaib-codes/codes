#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int  x,y,z,sum=0,ans=0,temp;
string str;
cin>>x>>y>>z;
int *arr= new int[x];
for(int i=0; i<x; i++){
    cin>>arr[i];
}
y%=x;
while(z--){
     cin>>temp;
     cout<<arr[(x-y+temp)%x]<<endl;

}
return 0;
}