#include<bits/stdc++.h>
using namespace std;
long long t, n, a[1000001], s, d, m, ans=0;


long long solve(long long a[], long long n)
{
    long long maxd= *max_element(a+1, a+1+n);
    long long b[maxd+1];
    memset(b, 0, sizeof b);
    for(int i=1; i<=n; i++) b[a[i]]++;
}

int main()
{
    freopen("RobotGift.inp","r",stdin);
    freopen("RobotGift.out","w",stdout);
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
            a[i]=abs(a[i]);
        }
        cout<<solve(a, n)<<"\n";    
    }
}