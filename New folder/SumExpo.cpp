#include<bits/stdc++.h>
using namespace std;
long long n, s, p, x;

int main()
{
    freopen("SumExpo.inp","r",stdin);
    freopen("SumExpo.out","w",stdout);
    cin>>n;
    s=p=0;
    for(int i = 2; i <= 1000000; i++)
    {
        x=0;
        while(n%i == 0)
        {
            x++;
            n=n/i;
        }
        if(x%2==0)
            s=s+x;
        else
            p=p+x;
    }
    if(n>1)
        p++;

    cout<<s<<"\n"<<p;
}
