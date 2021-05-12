#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int  d1,y1,m1,d,y,m,sum=0,ans=0;
cin>>d>>m>>y>>d1>>m1>>y1;
if(d > d1 && m == m1 && y == y1){
    ans = 15 * (d-d1);
    }
    else if(m > m1 && y == y1){
        ans = 500 * (m-m1);
    }
    else if(y > y1){
        ans  = 10000;
    }
    cout << ans ;
        

return 0;
}