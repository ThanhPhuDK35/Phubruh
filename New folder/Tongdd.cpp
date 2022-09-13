#include<bits/stdc++.h>
using namespace std;
long long n, a[1000001], s;

void dequy(long long i)
{
    if(i==0) return;
    else
    {
        if(i%2 == 1)
            s=s-a[i];
        else s=s+a[i];
        dequy(i-1);
    }
}

int main()
{
    freopen("Tongdd.inp","r",stdin);
    freopen("Tongdd.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    dequy(n);
    cout<<s;
}