#include <bits/stdc++.h>
using namespace std;
long long n, a[100000000], k;
double s, m;
int main()
{
    freopen("MaxAverK.inp", "r", stdin);
    freopen("MaxAverK.out", "w", stdout);
    cin>>n>>k;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(int i=1; i<= n-k; i++)
    {
        for(int j=i+1; j<=i+k; j++)
        {
            s=a[i]+a[j];
        }
        s=s/k;
        if(s>m)
            m=s;
    }
    cout << setprecision (6) << fixed << m;

}
