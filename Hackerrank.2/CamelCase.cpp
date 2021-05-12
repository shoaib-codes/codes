#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int  x,y,z,sum=1,ans=0;
string str;
cin>>str;
for(int i=0; i<str.length(); i++){
    if(str[i]>=65 && str[i]<=90){
        sum++;
    }
}
cout<<sum;
return 0;
}