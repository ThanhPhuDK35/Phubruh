#include<bits/stdc++.h>
using namespace std;
long long n, k, a[100005], b[100005], dem=0, j;
map<long long, long long> s;
int main()
{
    freopen("NGANHANG.INP","r",stdin);
    freopen("NGANHANG.OUT","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b+1,b+n+1);
    j=n;
    while(k>0)
    {
        while(k>=b[j])
        {
            s[b[j]]++;
            k-=b[j];
            if(k==0)
                break;
        }
        dem+=s[b[j]];
        j--;
    }
    cout<<dem<<'\n';
    for(int i=1;i<=n;i++)
    {
        cout<<s[a[i]]<<" ";
    }
}
