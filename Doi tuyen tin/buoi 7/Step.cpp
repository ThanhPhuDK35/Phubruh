#include<bits/stdc++.h>
using namespace std;
long long n, a[1001], s;

bool st(long long x)
{
    long long y, z;
    if(x <= 9)
        return false;
    else
    {
       y=x%10;
       x=x/10;
       while(x > 0)
       {
           z=x%10;
           x=x/10;
           if(z > y)
            return false;
           y=z;
       }
       return true;
    }
}

int main()
{
    freopen("Step.inp","r",stdin);
    freopen("Step.out","w",stdout);
    cin>>n;
    s=0;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        if(st(a[i]) == true)
            s++;
    }
    cout<<s;
}
