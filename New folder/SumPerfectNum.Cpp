#include<bits/stdc++.h>
using namespace std;
long long s, a, b, e;

long long uoc(long long x)
{
    s=0;
    for(int i=2; i<=sqrt(x); i++)
    {
        if(x%i==0)
        {
            if((x/i)==i)
                s+=i;
            else
                s+=(i+x/i);
        }
    }
    return s+1;
}

int main()
{
      freopen("SumPerfectNum.inp","r",stdin);
    freopen("SumPerfectNum.out","w",stdout);
    cin>>a>>b;
    e=0;
    for(int i=a; i<=b; i++)
    {
        if(uoc(i)>i)
            e+=i;
    }
    cout<<e;
}
