#include<bits/stdc++.h>
using namespace std;
long long n, mv, m=0;
char a[20];
string d[1100000];

void solve(int x)
{
    bitset<20> b(x);
    string s="";
    for(int i=0; i<=n-1; i++)
       if(b[i] == 1)  s=s+a[i];
    sort(s.begin(), s.end());
    m++;
    d[m]=s;
}

int main()
{
    freopen("MString.inp","r",stdin);
    freopen("MString.out","w",stdout);
    cin>>n;
    for(int i=0; i<n; i++) cin>>a[i];
    mv=1<<n;
    for(int i=1; i< mv; i++)
       solve(i);
    sort(d+1, d+1+m);
    for(int i=1; i<=m; i++)
    {
        cout<<d[i]<<"\n";
    }
}