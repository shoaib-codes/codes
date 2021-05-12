#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int  x,y,z,sum=0,ans=0;
string str;
cin>>str;
string sub = str.substr(0,2);
int num = stoi(sub);
if(str[8]=='A'){
    if(num==12){
        string m="00"+str.substr(2,6);
        cout<<m;
    }
    else{
    cout<<str.substr(0,8);
    }
}
else{
if(num==12){
    cout<<str.substr(0,8);
}
else{
    num+=12;
    string jj=to_string(num)+str.substr(2,6);
cout<<jj;
}
}
return 0;
}