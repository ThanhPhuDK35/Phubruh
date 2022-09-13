#include <bits/stdc++.h>
using namespace std;
long long n, a[10001], e;

long long uoc(long long x)
{
    long long s=0;
    for(long long i = 1; i <= sqrt(x) ; i++)
    {
        if(x%i==0)
        {
            s=s+i;
            if(x/i != i)
            s=s+(x/i);
        }
    }
    return s-x;

}

int main()
{
    freopen("tiny.Inp", "r", stdin);
    freopen("tiny.Out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;  
    e=0;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        if(a[i] < uoc(a[i]))
        {
            e++;
        }
    }
    cout<<e;
}