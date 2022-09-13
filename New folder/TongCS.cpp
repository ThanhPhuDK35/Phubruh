#include<bits/stdc++.h>
using namespace std;
string n;
long long s;

void dequy(long long i)
{
    if(i==-1) return;
    else
    {
        s=s+n[i]-48;
        dequy(i-1);
    }
}

int main()
{
    freopen("TongCS.inp","r",stdin);
    freopen("TongCS.out","w",stdout);
    cin>>n;
    dequy(n.size()-1);
    cout<<s;
}