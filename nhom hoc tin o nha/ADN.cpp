#include<bits/stdc++.h>
using namespace std;
long long n, d=0, f=0;
string b, m, a[100001], s[100001];
string k[1000005];

void Backtrack(int i)
{
    if (i>n)
    {
        f++;
        for (int l=1; l<=n; l++) k[f]=k[f]+a[l];
        return;
    }
    if (b[i]!=m[i])
    {
        a[i]=min(b[i],m[i]);
        Backtrack(i+1);
        a[i]=max(b[i],m[i]);
        Backtrack(i+1);
    }
    else
    {
        a[i]=b[i];
        Backtrack(i+1);
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>b>>m;
    b=' '+b;
    m=' '+m;
    n=b.size()-1;
    Backtrack(1);
    cout<<f<<'\n';
    for(int i=1;i<=f;i++)
        cout<<k[i]<<'\n';
}
