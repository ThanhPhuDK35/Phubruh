#include<bits/stdc++.h>
using namespace std;
long long n, x, a[1000000];

int main()
{
    freopen("LienThong.inp","r",stdin);
    freopen("LienThong.out","w",stdout);
    cin>>n>>x;
    for(int i=1; i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=x; i>=1; i--)
    {
           if(a[i] != a[x])
           {
              cout<<i+1<<" ";
              break;
           }


    }
    for(int i=x; i<=n; i++)
    {
        if(a[i]!= a[x])
        {
            cout<<i-1<<" ";
            break;
        }


    }
}
