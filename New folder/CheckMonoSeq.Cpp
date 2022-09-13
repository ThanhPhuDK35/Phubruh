#include<bits/stdc++.h>
using namespace std;
long long n, t, a[10000001], b[10000001], s;

int main()
{
     //freopen("CheckMonoSeq.inp","r",stdin);
     //freopen("CheckMonoSeq.out","w",stdout);
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b+1, b+1+n);
        s=0;
        for(int i=1; i<=n; i++)
        {
            if(a[i] != b[i])
                s++;
        }
        sort(b+1, b+1+n, greater<int>());
        long long x=0;
        for(int i=1; i<=n; i++)
        {
            if(a[i] != b[i])
                x++;
        }
        if(min(s, x)==0 || min(s, x)==2)
            cout<<"1"<<"\n";
        else
            cout<<"0"<<"\n";

    }
}
