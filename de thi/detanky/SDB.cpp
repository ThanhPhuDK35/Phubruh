#include<bits/stdc++.h>
using namespace std;
long long t, a, b;

long long demuoc(long long m)
{
    long long d = 1;
    for (long long i=2; i*i <= m; i++)
    {
        long long k = 0;
        while (m % i == 0)
        {
            m = m / i;
            k++;
        }
        d = d*(k+1);
    }
    if (m > 1) d = d * 2;
    return d;
}

int main()
{
    freopen("SDB.inp","r",stdin);
    freopen("SDB.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        long long s=0;
        for(int i=a; i<=b; i++)
        {
            if(i%3 == 0 && demuoc(i) == 9)
                s++;
        }
        cout<<s<<"\n";
    }
}