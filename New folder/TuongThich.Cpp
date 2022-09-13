#include<bits/stdc++.h>
using namespace std;
long long a, b, e, tc, n, x, u, v,  y;

int main()
{freopen("TuongThich.inp","r",stdin);
    freopen("TuongThich.out","w",stdout);
    cin>>n;

    for(int i=1; i<= n; i++)
    {
        cin>>u>>v;

        e=0;
        for(int k=0; k<= 9; k++)
        {
            x=0;
            a=abs(u); b=abs(v);
            if(k==a)
                x=1;
            else
                while(a>0)
            {
                 tc=a%10;a=a/10;
                 if(tc==k)
                    x=1;
            }
            y=0;
            if(k==b)y=1;
            else
                while(b>0)
            {
                tc=b%10;b=b/10;
                if(tc==k)
                    y=1;

            }
               if(x==1 && y==1)
                e=1;
        }
    if(e==1)
        cout<<"Yes"<<"\n";
    else
        cout<<"No"<<"\n";
    }

}
