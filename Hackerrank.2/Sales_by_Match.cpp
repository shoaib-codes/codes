#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int  x,y,z,sum=0,ans=0;
string str;
cin>>z;
int *arr= new int [z];
for( int i=0; i<z; i++){
    cin>>arr[i];
}
for(int i=0; i<z; i++){
    for(int j=i+1; j<z; j++){
        if(arr[i]!=102 && arr[i]!=102 && arr[i]==arr[j]){
arr[j]=102;
sum++;
        }
    }
    arr[i]=102;
    ans+=(sum+1)/2;
    sum=0;

}
cout<<ans;
return 0;
}