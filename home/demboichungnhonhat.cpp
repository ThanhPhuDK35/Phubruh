#include<bits/stdc++.h>
using namespace std;
long long n, k, a[100001];

int main()
{
    cin>>n>>k;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    long long d=0;
    for(int i=1; i<n; i++)
    {
        for(int x=i+1; x<= n; x++)
        {
                if((a[i]/(__gcd(a[i], a[x])))<=(k/a[x]))
                    d++;
        }
    }
    cout<<d;
}
