#include<bits/stdc++.h>
using namespace std;
long long n, q, a[100000001];

int main()
{
    cin>>n>>q;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    long long u=0, v=0, x, y;
    while(q--)
    {
        cin>>u>>v;
        sort(a+u, a+1+v);
        y=a[v]; a[v-1];
        
    }
}