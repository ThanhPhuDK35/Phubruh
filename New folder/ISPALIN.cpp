#include<bits/stdc++.h>
using namespace std;
long long n, l;
string s, y;

void dequy(long long i)
{
    if(i == -1) return;
    else
    {
        y=y+s[i];
        dequy(i-1);
    }
}

int main()
{
    freopen("ISPALIN.inp","r",stdin);
    freopen("ISPALIN.out","w",stdout);
    cin>>n;
    while(n--)
    {
        cin>>s;
        l=s.size()-1;
        dequy(l);
        if(y == s) cout<<"1"<<"\n";
        else cout<<"0"<<"\n";
        y="";
    }
}