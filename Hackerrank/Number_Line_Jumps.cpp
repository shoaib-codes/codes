#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int  x1,v1,x2,v2,sum=0,ans=0;
;
cin>>x1>>v1>>x2>>v2;
if((x2>x1 && v2>v1)||(x2<x1 && v2<v1)||(x2!=x1 && v1==v2)) {
    cout<<"NO";
}
else if(x1==x2){
cout<<"YES";
}
else if(v1>v2){
        while(x1<=x2){
            if(x1==x2){
                ans=1;
            }
            x1=x1+v1;
            x2=x2+v2;
        }
        if(ans==1){
           cout<<"YES";
       }
       else{
            cout<<"NO";
       }
}

else if(v2>v1){
       while(x2<=x1){
           if(x1==x2){
               ans=1;
           }
           x1=x1+v1;
           x2=x2+v2;
       }
       if(ans==1){
           cout<<"YES";
       }
       else{
            cout<<"NO";
       }
}
  else{
            cout<<"NO";
       }
      
   
return 0;
}