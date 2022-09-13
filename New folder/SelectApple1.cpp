#include<bits/stdc++.h>
using namespace std;
long long n, a[10000009], m, s;

int main()
{
    freopen("SelectApple1.inp","r",stdin);
    freopen("SelectApple1.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    s=1;
    for(int i=2; i<=n; i++)
    {
        if(a[i] == a[i-1])
        {
            s++;
        }
        else
        {

            s=1;
        }
            m=max(m, s);
    }
    cout<<m;
}
