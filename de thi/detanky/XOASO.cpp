#include<bits/stdc++.h>
using namespace std;
long long n, a[1000001], s, e=0, chan, le;

int main()
{
    freopen("XOASO.inp","r",stdin);
    freopen("XOASO.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        s=s+a[i];
        if(a[i] % 2 == 0)
            chan++;
        else
            le++;
    }
    if(s%2 == 1)
    {
        cout<<chan*le;
        return 0;
    }
    else
    {
        cout<<(le*(le-1) + chan*(chan-1))/2;
        return 0;
    }
}
