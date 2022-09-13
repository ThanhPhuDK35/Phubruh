#include<bits/stdc++.h>
using namespace std;
long long n, s, m, x;

int main()
{
    freopen("CV.inp","r",stdin);
    freopen("CV.out","w",stdout);
    cin>>x;
    m=1e18;
    for(long long i = 1; i <= sqrt(x) ; i++)
    {
        if(x%i==0)
        {
            m=min(m, (i + x/i)*2);
            if(x/i != i)
                m=min(m, (x/i + x/(x/i))*2);
        }
    }
    cout<<m;
}