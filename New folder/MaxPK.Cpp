#include<bits/stdc++.h>
using namespace std;
long long a, b, x, k, s;

int main()
{
    freopen("MaxPK.inp","r",stdin);
    freopen("MaxPK.out","w",stdout);
    cin>>a>>b>>x;
    if(x==1)
        cout<<"No solution";
    else
    {
        k=1;
        s=x;
        while(s*x <= b)
        {
            s=s*x;
            k++;
        }
        if(a<=s) cout<<k;
        else
            cout<<"No solution";
    }
}
