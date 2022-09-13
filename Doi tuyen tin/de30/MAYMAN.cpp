#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define st string
#define nmax 1000005
#define nmoi 1000007
//Code by Lê Duy Mạnh - 9B - ĐTM - T:TKPI72T
#define rct ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
ll mina,n,p,a[nmax],maxa=0,maxi,maxj;
int main()
{
    rct;
    freopen("MAYMAN.INP","r",stdin);
    freopen("MAYMAN.OUT","w",stdout);
    cin>>n>>p;
    cin>>a[1];
    mina=a[1];
    for(int i=2; i<=n; i++)
    {
        cin>>a[i];
        if (a[i]-mina>=p)
        {
          for(int j=1; j<i; j++)
            {
                if (a[i]-a[j]>=p)
                {
                    if (i-j>maxa)
                    {
                        maxa=i-j;
                        maxj=j;
                        maxi=i;
                    }
                    break;
                }
            }
        }
        mina=min(mina,a[i]);
    }
    if (maxa>0) cout<<maxj<<" "<<maxi;
    else cout<<"0";
}
