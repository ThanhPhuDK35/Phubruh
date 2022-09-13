#include<bits/stdc++.h>
using namespace std;
long long n, x, a[100000001], e, s;

int main()
{
    freopen("ThongKeK1.Inp","r",stdin);
    freopen("ThongKeK1.Out","w",stdout);
    cin>>n>>x;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    e=0;
    for(int i=1; i<=n; i++)
    {
        s=0;
        for(int j=1; j<=n; j++)
        {
            if(a[i]==a[j])
                s++;
        }
        if(s==x)


            e=e+a[i];
    }
    cout<<e/x;
}
