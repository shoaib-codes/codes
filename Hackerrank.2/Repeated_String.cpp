#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
long long x,y,z,sum=0,ans=0;
string str;
cin>>str;
cin>>z;
long long rem= z%str.length();
    for(int i=0; i<str.length(); i++){
        if(str[i]=='a'){
            ans++;
        }
        if(str[i] == 'a' && i < rem){
            sum++;
        }
    }
cout<<(ans*(z/str.length()))+sum;

return 0;
}