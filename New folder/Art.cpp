#include<bits/stdc++.h>
using namespace std;
long long n, m, s, k, x, y, e;
pair<long long , long long> a[1000001];

int main()
{
    //freopen("Art.inp","r",stdin);
    //freopen("Art.out","w",stdout);
    cin>>n>>k;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i].first>>a[i].second;
    }
    s=1;
    for(int i = 1; i <= n; i++)
    {
        e = 0; x=a[i].first; y=a[i].second;
        for(int j = 1; j<=n; j++)

            if(a[j].first == x && a[j].second >= y && a[j].second-y <= k)
                e++;

        s=max(s, e);
    }
    cout<<s;

}

