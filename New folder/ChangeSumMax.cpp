#include <bits/stdc++.h>
using namespace std;
long long n, m, a[200005];
pair<int, int> c[200005];

int main()
{
    freopen("eSumMax.inp", "r", stdin);
    freopen("eSumMax.out", "w", stdout);
    cin>>n>>m;
    for(int i=1; i<=n;i++)
        cin>>a[i];
    for(int i=1; i<=m; i++)
    {
        cin>>c[i].second>>c[i].first;
    }
    sort(a+1, a+1+n);
    sort(c+1, c+1+m);
    int t=1; bool kt=false;
    for(int i=m; i>=1; i--)
    {
        if(t>n || kt==true) break;
        for(int l=1; l<=c[i].second; l++)
        {
            if(c[i].first <= a[t]){kt = true; break;}
            a[t]=c[i].first; t++;
            if(t>n) break;
        }
    }
    long long s=0;
    for(int i=1; i<=n; i++)
    {
        s=s+a[i];
    }
    cout<<s;
}
