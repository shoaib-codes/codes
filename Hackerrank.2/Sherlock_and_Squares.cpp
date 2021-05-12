#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int  x,y,z,sum=0,ans=0;
string str;
cin>>z;
while(z--){
    cin>>x>>y;
    cout << floor(sqrt(y)) - ceil(sqrt(x)) + 1 << endl;
}
return 0;
}