#include<bits/stdc++.h>
using namespace std;

long long b, c, m, n, k, s;


long long sum(long long x)
{
    c=0;
    while(x > 0)
    {
        b = x % 10;
        x = x / 10;
        c=c+b;
    }
    return c;
}


int main()
{
    cin>>m>>n>>k;
    bool nt[n+1];
    {
    memset(nt,true,n+1);
    nt[1]=false;
    for (long long i=2;i<=n+1;i++)
    {
        if (nt[i]==true)
        {
            for (long long j=i*2;j<=n+1;j+=i)
                nt[j]=false;
        }
    }
    }
    s=0;
    for(long long e=n; e<= m ; e++)
    {
        if(nt[e]==true  && sum(e) % k == 0)
            s++;
    }
    cout<<s;
}
