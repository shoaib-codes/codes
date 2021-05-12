#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int  x,y,z,sum=0,ans=0;
cin>>z;
while(z--){
     cin>>x>>y;
     int *arr=new int [y];
     for(int i=0; i<y; i++){
         cin>>arr[i];
     }
for(int i=0; i<y; i++){
    for(int j=i+1; j<y; j++){
        if(arr[i]+arr[j]==x){
            cout<<i+1<<" "<<j+1<<endl;
            break;
        }
    }
}
}
return 0;
}