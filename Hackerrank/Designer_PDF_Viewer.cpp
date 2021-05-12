#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int  x,y,z,max=-1000,ans=0;
string str;
int arr[26];
for(int i=0; i<26; i++){
    cin>>arr[i];
}
cin>>str;
for(int i=0; i<str.size();  i++){
if(arr[str[i]%97]>max){
max=arr[str[i]%97];
}
}
cout<<max*str.size();
return 0;
}