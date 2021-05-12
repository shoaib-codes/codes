#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int  sum=0,ans=0;
string str;
int arr[26]={0};
getline(cin,str);
for(int i=0; i<str.length(); i++){
    arr[tolower(str[i])%97]++;
}
for(int i=0; i<26; i++){
    if(arr[i]==0){
        ans=1;
        break;
    }
}
if(ans==1){
    cout<<"not pangram";
}
else
{
    cout<<"pangram";
}

return 0;
}