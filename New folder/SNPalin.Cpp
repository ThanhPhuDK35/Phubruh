#include<bits/stdc++.h>
#define ll long long
#define nmax 1000000007
using namespace std;
ll n, k, a[1000005], s, S=0, r ;
bool kt(ll k)
{
    s = 0;
    for(int i = k;i != 0;i = i /10)
    {
         r = i % 10;
         s = s * 10 + r ;
    }
    if(s == k) return true ;
    else return false;
}
int main()
{
    freopen("SNPalin.INP","r",stdin);
    freopen("SNPalin.OUT","w",stdout);
     ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    cin>>n;
    for(int i = 1;i <= n;i++)
        cin>>a[i];
    for(int i = 1;i <= n;i++)
        {
            if(kt(a[i])) S+=a[i];
        }
    cout<<S;
}
