#include <bits/stdc++.h>
using namespace std;
long long n, a[100000001], x;

int main()
{
    freopen("SecondDivisor.INP","r",stdin);
    freopen("SecondDivisor.OUT","w",stdout);
    cin>>n;
    for(int i=1 ; i<=n; i++)
    {
        cin>>a[i];
        x = 0;
        for(int j = 2; j <= sqrt(a[i]); j++)
        {
            if(a[i]%j == 0)
            {
                 x = j;
                 break;
            }
        }
        if(x == 0)
            cout<<a[i]<<'\n';
        else
            cout<<x<<'\n';
    }

}
