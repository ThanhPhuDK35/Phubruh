#include<bits/stdc++.h>
using namespace std;
long long n, s;

bool shh(long long n)
{
    long long sum=0;
    for(int i=1; i<=sqrt(n); i++)
        if(n%i==0)
        {
            sum+=i;
            if(n/i!=i)
                sum+=n/i;
        }
    if(sum == n*2) return true;
    return false;
}

int main()
{
    freopen("SHH.inp","r",stdin);
    freopen("SHH.out","w",stdout);
    cin>>n;
    s=0;
    for(int i=1; i<=n; i++)
    {
        if(shh(i) == true)
        s=s+i;
    }
    cout<<s;
}