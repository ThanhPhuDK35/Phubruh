#include<bits/stdc++.h>
using namespace std;
long long a[10000001], b[10000001], n, k;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    b[0]=0;
    cin>>n>>k;
    for(int i=1; i<=n;i++)
    {
        cin>>a[i];
        b[i]=b[i-1]+a[i];
    }
    int d=0;
    for(int i=1; i<= n; i++)
    {
        for(int j=i+1; j<=n ; j++)
        {
            if(b[j]-b[i-1] == k)
                d++;
        }
    }
    cout<<d;
}

