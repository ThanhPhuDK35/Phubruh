#include<bits/stdc++.h>
using namespace std;
long long n, m, s, e;
pair<long long , long long> a[500001];

int main()
{
    freopen("milk.Inp","r",stdin);
    freopen("milk.Out","w",stdout);
    cin>>n>>m;
    for(int i=1; i<=m; i++)
    {
        cin>>a[i].first>>a[i].second;
    }
    sort(a+1, a+m+1);
    s=0;
    for(int i=1; i<=m; i++)
    {
        s=s+a[i].first*a[i].second;
        e=e+a[i].second;
        if(e >= n)
        {
            if(e == n)
                break;
            else
            {
                s=s-(e-n)*a[i].first;
                break;
            }
        }
    }
    cout<<s;
}
