#include<bits/stdc++.h>
using namespace std;
long long n, a[10000001], b[10000001], ans = 0;

int main()
{
    freopen("ChonTaoLT.inp","r",stdin);
    freopen("ChonTaoLT.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    memset(b,-1,sizeof(b));
    for(int i = 1; i <= n; i++)
    {
        cin>>a[i];
        if(a[i]%3==0)
            ans = 1;
        a[i] += a[i-1];
        a[i] %= 3;

    }
    a[0] = 0;
    for(int i = n; i >= 0; i--)
    {
        if(b[a[i]] != -1)
        {
            ans = max(ans,b[a[i]]-i);
        }
        else
            b[a[i]] = i;
    }
    cout<<ans;
}
