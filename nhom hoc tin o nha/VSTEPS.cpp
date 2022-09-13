#include<bits/stdc++.h>
using namespace std;
#define mod 14062008
long long a[1000001],g[1000001], n, k;
bool b[1000001];

int main ()
{
    memset(b,true,sizeof(b));
    cin>>n>>k;
    for (int i = 1;i <= k;i++)
    {
        cin>>g[i];
        b[g[i]] = false;
    }
    if(b[1] == true) 
        a[1] = 1; 
    else 
        a[1] = 0;
    for(int i = 2;i <= n;i++)
    {
        if (b[i] == true) a[i] = (a[i - 1] % mod + a[i - 2] % mod) % mod;
        else a[i] = 0;
    }
    cout<<a[n];
}
