#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int a,b;
cin>>a;
double x=0,y=0,z=0,n=0;
for(int i=0; i<a; i++){
    cin>>b;
    n++;
if(b<0){
    x++;
}
else if(b>0){
    y++;
}
else{
    z++;
}

}
cout<<fixed<<y/n<<endl;
cout<<fixed<<x/n<<endl;
cout<<fixed<<z/n<<endl;
return 0;
}