#include <bits/stdc++.h>
using namespace std;
long long n, i, j, k, s=0, st, sd, a[1000000];
bool ds;

int main()
{
    //freopen("CHIADAY.inp","r",stdin);
    //freopen("CHIADAY.out","w",stdout);
    cin>>n;
    for( i=1; i<=n; i++)
    {
        cin>>a[i];
        s+=a[i];
    }
    for( i=n; i>=1; i--)
    {
        if(s%i == 0)
        {
            sd=s/i;
            ds=true;
            j=0;
            for(k=1; k<=i; k++)
            {
                st=0;
                while(st < sd)
                {
                    j++;
                    st+=a[j];
                }
                if(st > sd)
                {
                    ds=false;
                    break;
                }
            }

            if(ds == true)
            {
                k=i;
                cout<<k<<" "<<sd<<"\n";
                break;
            }
        }
    }
    j=0;
    for(i=1; i<=k; i++)
    {
        st=0;
        while((st != sd) || ((a[j+1] == 0) && (j<n)))
        {
            j++;
            cout<<a[j]<<" ";
            st+=a[j];
        }
        cout<<"\n";
    }
}
