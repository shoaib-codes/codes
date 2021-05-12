#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int  x,y,z,sum=0,ans=0;
cin>>z;
while(z--){
cin>>x>>y;
int *arr= new int[x];
for(int i=0; i<x; i++){
    cin>>arr[i];
}
int m=0; 
    for( int i=0; i<x; i++){
        if(arr[i]<=0){
            sum++;
        }
    }
if(sum>=y){
    cout<<"NO"<<endl;
}
else{
    cout<<"YES"<<endl;
}
sum=0;
delete[] arr;
}
return 0;
}