#include <bits/stdc++.h>
using namespace std;
long long n, m, s, tien;
pair<long long, long long> a[1000001];

int main()
{
    freopen("milk.inp","r",stdin);
    freopen("milk.out","w",stdout);
    cin>>n>>m;
    for(int i=1; i<=m; i++)
    {
        cin>>a[i].first>>a[i].second;

    }
    sort(a+1, a+1+m);
    tien=0, s=0;
    for(int i=1; i<=m; i++)
    {
        tien=tien+a[i].first*a[i].second;
        s=s+a[i].second;
        if(s >= n)
        {
            if(s == n)
                break;
            else
            {
                tien=tien-(s-n)*a[i].first;
                break;
            }
        }
    }
    cout<<tien;
}