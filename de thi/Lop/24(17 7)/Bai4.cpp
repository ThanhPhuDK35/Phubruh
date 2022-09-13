#include<bits/stdc++.h>
using namespace std;
long long n, a[10000001], s;

int main()
{
    freopen("Bai4.inp","r",stdin);
    freopen("Bai4.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    cout<<a[1]<<" ";
    for(int i=2; i<=n; i++)
    {
        s=0;
        for(int j=i-1; j>=1; j--)
        {
            if(a[i] == a[j])
                s++;
        }
        if(s == 0)
            cout<<a[i]<<" ";
    }
}
