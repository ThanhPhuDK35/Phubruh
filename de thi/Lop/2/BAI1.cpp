#include<bits/stdc++.h>
using namespace std;
long long x;
string n;
int main(){
    freopen("BAI1.inp", "r", stdin);
    freopen("BAI1.out", "w", stdout);
    cin>>n;
    if(n[0]-48==0)
        x=0;
    if(n[0]-48==1)
        x=1;
    for(int i=1;i<=n.length();i++)
    {
        if(n[i]-48==0)
             x=x*2;
        if(n[i]-48==1)
             x=x*2+1;
    }
    cout<<x;
}
