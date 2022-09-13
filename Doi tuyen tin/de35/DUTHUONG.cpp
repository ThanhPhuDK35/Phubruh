#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll T,M,S;

ll check(ll a,ll b)
{
    if(b==0) return 1;
    if(a==1 or a==5 or a==6 or a==0)
    {
        return a;
    }
    if(a==2)
    {
        if(b%4==1) return 2;
        if(b%4==2) return 4;
        if(b%4==3) return 8;
        if(b%4==0) return 6;
    }
    if(a==3)
    {
        if(b%4==1) return 3;
        if(b%4==2) return 9;
        if(b%4==3) return 7;
        if(b%4==0) return 1;
    }
    if(a==4)
    {
        if(b%2==1) return 4;
        if(b%2==0) return 6;
    }
    if(a==7)
    {
        if(b%4==1) return 7;
        if(b%4==2) return 9;
        if(b%4==3) return 3;
        if(b%4==0) return 1;
    }
    if(a==8)
    {
        if(b%4==1) return 8;
        if(b%4==2) return 4;
        if(b%4==3) return 2;
        if(b%4==0) return 6;
    }
    if(a==9)
    {
        if(b%2==1) return 9;
        if(b%2==0) return 1;
    }
}

int main()
{
    freopen("DUTHUONG.inp","r",stdin);
    freopen("DUTHUONG.out","w",stdout);
    cin>>T>>M;
    S=check(T%10,M);
    cout<<1000000*S;
}
