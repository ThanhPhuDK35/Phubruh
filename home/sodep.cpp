#include<bits/stdc++.h>
using namespace std;
long long a[10000001], n, s, e;

long long uoc(long long n)
{
    long long d = 0;
    for(long long i = 1;i <= sqrt(n); i ++)
        if(n % i == 0)
        {
            d++;
            if(n / i != i)
                d++;
        }
    return d;
}


int main()
{
    //freopen("sodep.inp","r",stdin);
    //freopen("sodep.out","w",stdout);
    cin>>n;
    s=0;
    for(int x=0; x<n;x++)
    {
        cin>>a[x];
    }
    cout<<"\n";
        for(int x=0; x<n;x++)
    {
        if(a[x]%uoc(a[x])==0)
            cout<<"Co\n";
        else
            cout<<"Khong\n";
    }
}
