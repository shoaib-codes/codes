#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int arr[5];
for (int i = 0; i < 5; i++) {
    cin >> arr[i];
  }
int smol = arr[0], big = arr[0];
long long sum=arr[0];
for(int i=1; i<5; i++){
    if(arr[i]>big){
        big=arr[i];
    }
    if(arr[i]<smol){
        smol=arr[i];
    }
    sum+=arr[i];
}
cout<<(long long)sum-big<<" "<<(long long)sum-smol;
return 0;
}