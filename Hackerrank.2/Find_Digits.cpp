#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int z,y,sum=0,ans;
    cin >> z;
    for(int i = 0; i < z; i++){
        int x;
        cin >> x;
        y= x;
        while(y!=0){
            ans = y % 10;
            if(ans!=0 && x%ans==0){
                sum++;
                }
            y/=10;
        }
        cout << sum << endl;
        sum=0;
    }
    return 0;
}
