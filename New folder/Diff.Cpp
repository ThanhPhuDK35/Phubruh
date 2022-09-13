#include<bits/stdc++.h>
using namespace std;
long long n,t;
int main()
{
    freopen("Diff.inp","r",stdin);
    freopen("Diff.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long ans1 = -1e9, ans2 = 1e9;
        while(n > 0)
        {
            ans1 = max(ans1,n%10);
            ans2 = min(ans2,n%10);
            n /= 10;
        }
        cout<<ans1-ans2<<'\n';
    }
}
