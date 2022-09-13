#include<bits/stdc++.h>
using namespace std;
long long n, k, a[100001], kq, s, j=0;
int main()
{
    freopen("COUNT.INP ","r",stdin);
    freopen("COUNT.Out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin>>n>>k;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    kq=0; s=0;
    for(int i=1; i<=n; i++)
    {
        s=s+a[i];
        while(s > k) s=s-a[++j];
        if(s == k)
            kq++;
    }
    cout<<kq;
}
