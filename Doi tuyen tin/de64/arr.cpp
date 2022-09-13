#include<bits/stdc++.h>
using namespace std;
long long n, a[10000001];
map<long long, long long> s;

int main()
{
    freopen("arr.inp","r",stdin);
    freopen("arr.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        s[a[i]]++;
    }
    for(int i=1; i<=n; i++)
    {
        if(s[a[i]] > 0)
        {
            cout<<a[i]<<" ";
            s[a[i]] = 0;
        }
    }
}
