#include<bits/stdc++.h>
using namespace std;
map<long long,long long> p,q;
long long s,n,m,a[100000001],b[100000001],c[100000001];

int main()
{
    freopen("xor.inp","r",stdin);
    freopen("xor.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    for(int i = 1; i <= n; i++)
    {
        cin>>a[i];
        p[a[i]]++;
    }
    s = 0;
    for(int i = 1; i <= m; i++)
    {
        cin>>b[i];
        q[b[i]]++;
    }
    for(int i = 1; i <= n; i++)
    {
        if(q[a[i]] == 0 && p[a[i]] == 1)
            c[++s] = a[i];
    }
     for(int i = 1; i <= m; i++)
    {
        if(p[b[i]] == 0 && q[b[i]] == 1)
            c[++s] = b[i];
    }
   if(s == 0)
    cout<<"No solution";
   else
   {
       sort(c+1,c+1+s);
       for(int i = 1; i <= s; i++)
        cout<<c[i]<<' ';
   }
}
