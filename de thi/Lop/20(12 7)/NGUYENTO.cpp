#include<bits/stdc++.h>
using namespace std;
long long n, e, z;

long long pt(long long x)
{
    long long s=0;
    for(int i = 2;i<=sqrt(x);i++)
    while(x%i==0)
    {
        x/=i;
            s++;

    }
        if (x>1)
    {
         s++;
    }
    if(s == 2)
        return true;
    else
        return false;
}

int main()
{
    freopen("NGUYENTO.inp", "r", stdin);
    freopen("NGUYENTO.out", "w", stdout);
    cin>>n;
    e=0; z=0;
    for(int i=4; i<=n; i++)
    {
        if(pt(i) == true)
        {
            cout<<i<<" ";
            e++;
            z++;
        }
        if(e==20)

        {
            cout<<"\n";
            e=0;
        }

    }
    if(z==0)
        cout<<"-1";
}
