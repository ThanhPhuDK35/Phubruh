#include <bits/stdc++.h>
using namespace std;
long long n, a[10000001], best, sum, x, y, z;

int main()
{
    freopen("SUBSEQ.INP","r",stdin);
    freopen("SUBSEQ.OUT","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    x=0; y=0; z=0;
    for(int i=1; i<=n; i++)
    {
        if(sum + a[i] < a[i])
        {
            z=i;
            sum=a[i];
        }
        else
        {
            sum = sum + a[i];
        }
        if(best < sum)
        {
            best = sum;
            x=z;
            y=i;
        }

    }
    best=0;
    sum = 0;
    for (int i = 0; i < n; i ++)
    {
       sum = max(a[i], sum + a[i]);
       best = max(sum, best);
    }
    cout<<x<<"\n"<<y<<"\n"<<best;

}
