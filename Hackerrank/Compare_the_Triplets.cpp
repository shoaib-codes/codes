#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int a[3],b[3],fin[2]={0,0};
for(int i=0;i<3; i++){
    cin>>a[i];
}
for(int i=0;i<3; i++){
    cin>>b[i];
}
for(int i=0; i<3; i++){
    if(a[i]>b[i]){
        fin[0]++;
    }
    else if(a[i]<b[i]){
        fin[1]++;
    }
}
for(int i=0; i<2; i++){
    cout<<fin[i]<<" ";
}
return 0;
}