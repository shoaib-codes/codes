#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int  s,t,a,b,m,n,ans1=0,ans2=0;
cin>>s>>t>>a>>b>>m>>n;
int *arr1=new int[m];
int *arr2=new int[n];
for(int i=0; i<m; i++){
    cin>>arr1[i];
    if((a+arr1[i])>=s && (a+arr1[i])<=t){
        ans1++;
    }
}
for(int i=0; i<n; i++){
    cin>>arr2[i];
    if((b+arr2[i])>=s && (b+arr2[i])<=t){
        ans2++;
    }
}
cout<<ans1<<endl;
cout<<ans2;
return 0;
}