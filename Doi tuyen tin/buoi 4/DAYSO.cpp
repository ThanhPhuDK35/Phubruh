#include<bits/stdc++.h>
using namespace std;
long long n, a[100001], c[100001], l[100001],  s, e, f;

int main()
{
    freopen("DAYSO.inp","r",stdin);
    freopen("DAYSO.out","w",stdout);
    cin>>n;
    s=0;
    e=0;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        if(i%2 != a[i]%2)
        {
            if(a[i] % 2 == 0)
                {c[e]=i; e++;}
            else
                {l[s]=i; s++;}
        }
    }
    if(s != e)
    {
        cout<<"-1";
        return 0;
    }
    f=s;
    cout<<s<<"\n";
    e=0;
    s=0;
    for(int i=1; i<=n; i++)
    {
        if(i%2 != a[i]%2)
        {
            if(c[e] < l[e])
            {
                cout<<c[e]<<" "<<l[e]<<"\n";
                e++;
            }
            else
            {
                cout<<l[e]<<" "<<c[e]<<"\n";
                e++;
            }

            s++;

        }
        if(s == f)
            return 0;
    }
}
