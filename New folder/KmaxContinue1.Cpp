#include<bits/stdc++.h>
using namespace std;
long long n, k, a[100001], m[10001];

int main()
{
    freopen("KmaxContinue1.inp","r",stdin);
    freopen("KmaxContinue1.out","w",stdout);
    cin>>n>>k;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(int i=1; i <= n-k+1; i++)
    {
        m[i] = a[i];
        for(int j = i; j <= i+k-1; j++)
        {
            if(m[i] < a[j])
                m[i] = a[j];
        }
        cout<<m[i]<<"\n";
    }
}
