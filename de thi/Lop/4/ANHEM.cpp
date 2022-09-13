#include <bits/stdc++.h>
using namespace std;
long long m, n, s1=0, s2=0;

bool nt(long long x)
{
    long long s=0;
    for(int i=2; i*i<=x; i++)
        if(x%i==0)
          return false;
     return x>1;

}

int main()
{
    freopen("ANHEM.inp","r",stdin);
    freopen("ANHEM.out","w",stdout);
    cin>>m>>n;
    if(nt(m)==true && nt(n)==true)
        cout<<"NO";
    else
    {
    for(int i=2; i<=sqrt(m); i++)
    {
        if(m%i==0)
        {
            s1=s1+i;
            if(m/i != i)
               s1=s1+m/i;

        }
    }
    for(int i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            s2=s2+i;
            if(n/i != i)
               s2=s2+n/i;

        }
    }
    if(s1==s2)
        cout<<"YES";
    else
        cout<<"NO";
    }
}

