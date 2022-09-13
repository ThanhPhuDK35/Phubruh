#include<bits/stdc++.h>
using namespace std;
long long n, a[1000001],dem=0,k,s[1000005];
int main()
{
    freopen("TwoSet.INP","r",stdin);
    freopen("TwoSet.OUT","w",stdout);
     ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    cin>>n;
    for(long long i = 1; i <= n;i++)
        { a[i] = i;
        k+=i;
        }
    if(k % 2 == 1) {cout<<-1; return 0;}
    k = k / 2;
    for(long long i = n; i >= 1;i--)
        {
        if(a[i] <= k) { k-= a[i];  dem++; s[dem] = a[i]; a[i] = false;}
        }
    cout<<dem<<'\n';
    for(long long i = 1; i <= dem;i++)
        {
            cout<<s[i]<<" ";
        }
    cout<<'\n';
    cout<<n-dem<<'\n';
    for(long long i = 1; i <= n;i++)
        if(a[i] != false) cout<<a[i]<<" ";
    }
