#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int  x,year,sum=0,ans=0;
cin>>year;
string k="",f="";
stringstream ss;  
  ss<<year;  
    ss>>k; 
    if(year==1918){
        f="26.09.1918";
    }
else if((year<1918 && year%4==0) ||(year%400==0 ||(year%4==0 && year%100!=0)))
{
    f="12.09."+k;
}
else{
    f="13.09."+k;
}
cout<<f;
return 0;
}