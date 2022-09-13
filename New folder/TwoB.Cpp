#include<bits/stdc++.h>
using namespace std;
long long a, b, n, s;

int main()
{
    freopen("TwoB.inp","r",stdin);
    freopen("TwoB.out","w",stdout);
    cin>>a>>b>>n;
    while(n--)
    {
        if(a>b)
        {
          s=s+a;
          a--;
        }
        else
        {
            s=s+b;
            b--;
        }
        if(a < 0 && b < 0)
            break;

    }
    cout<<s;
}
