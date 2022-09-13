#include<bits/stdc++.h>
using namespace std;
long long a, b, boi, s, uoc, n, k=1e18;

int main()
{
    //freopen("CSN.inp","r",stdin);
    //freopen("CSN.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin>>a>>b;
    s=a*b;
    for(long long i=1;i<=sqrt(s);i++)
    {
        if(s%i==0)
        {
            if((i+s/i)<=k)
            {
                if(__gcd(i,(s/i))==a)
                {
                    if(b%(s/i)==0 &&  b%i==0)
                    {
                        k=i+s/i;
                        boi=i;
                        uoc=s/i;
                    }
                }
            }
        }
    }
    cout<<boi+uoc;
}
