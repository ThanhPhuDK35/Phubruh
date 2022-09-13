#include<bits/stdc++.h>
using namespace std;
long long n, a[1000001], s, m, k;

int main()
{
    //freopen("Bai3.inp","r",stdin);
    //freopen("Bai3.out","w",stdout);
    cin>>n>>k;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(int i=1; i<=n; i++)
    {
        if(a[i]%k==0)
        {
            s++;
        }
        else
        {
            if(m<s)  m=s;
            s=0;
        }
    }
    cout<<s;
}
