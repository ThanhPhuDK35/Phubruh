#include <bits/stdc++.h>
using namespace std;
long long nt[1000001], c[1000001], t, a, b, k;

void sangnt()
{
    fill(nt+1,nt+1000001+1,1);
    fill(c+1,c+1000001+1,1);
    nt[1] = c[1] = 0;
    for (int i=2; i*i<=1000001; i++)
    if (nt[i]==1)
        for (int j=i*i; j<=1000001; j+=i)
            nt[j] = c[j] = 0;
}

long long demuoc(long long x)
{
    long long souoc = 1, i = 2;
    while (i*i <= x)
    {
        int d = 0;
        while (x % i == 0)
        {
            d++;
            x = x/i;
        }
        souoc *= 2*d + 1;
        i++;
    }
    if (x > 1) souoc *= 3;
    return souoc;
}

void init()
{
    sangnt();
    for (int i=2; i*i<=1000001; i++)
    {
        k = demuoc(i);
        if (nt[k])
            c[i*i] = 1;
    }
    for (int i=1; i<=1000001; i++)
        c[i] += c[i-1];
}

int main()
{
    freopen("uocnto.inp","r",stdin);
    freopen("uocnto.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    init();
    cin >> t;
    while (t--)
    {
        cin>>a>>b;
        cout<<c[b] - c[a-1]<<"\n";
    }
    return 0;
}
