#include<bits/stdc++.h>
using namespace std;
long long n, x, a[100000001], e, s, k;

int main()
{
       freopen("ThongKeK2.Inp","r",stdin);
    freopen("ThongKeK2.Out","w",stdout);
    cin>>n>>k;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    sort(a+1, a+1+n);
    s=0;
    x=a[1];
    e=1;
    for(int i=2; i<=n; i++)
    {
         if(a[i] == a[i-1])
            e++;
         else{
            if(e==k)  s=s+x;
            x=a[i]; e=1;
         }

    }
    if(e==k)  s=s+x;
    cout<<s;
}
