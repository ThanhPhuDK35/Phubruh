#include<bits/stdc++.h>
using namespace std;
long long n, a[100001];

int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    long long d=0;
    for(int i=1; i<n; i++)
    {
        for(int x=i+1; x<= n; x++)
        {
            if(__gcd(a[i], a[x])>1)
                    d++;
        }
    }
    cout<<d;
}
