#include<bits/stdc++.h>
using namespace std;
long long a[10001], s[1000001], x, y, ma, mi, n;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("DEMHANG.inp","r",stdin);
    freopen("DEMHANG.out","w",stdout);
    cin>>n;
    ma=0;
    for(int i=1; i<=n;i++)
    {
        cin>>a[i];
        s[a[i]]++;
        if(s[a[i]] > ma )
        {
            ma=s[a[i]];
            x=a[i];
        }
    }
    for(int i=1; i<=n; i++)
    {
        if(s[a[i]] == ma && a[i] < x)
        {
            x=a[i];
        }
    }
    cout<<x<<" "<<ma;
}
