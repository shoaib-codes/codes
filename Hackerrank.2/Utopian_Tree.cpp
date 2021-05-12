#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int  x,y,z,sum=1,ans=0;
cin>>z;
while(z--){
     cin>>x;
for(int i=1; i<=x; i++){
    if(i%2==0){
        sum++;
    }
    
    else{
        sum*=2;
    }
}
cout<<sum<<endl;
sum=1;
}
return 0;
}