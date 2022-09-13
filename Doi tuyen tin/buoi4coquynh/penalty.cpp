#include<bits/stdc++.h>
using namespace std;
long long n, t, q, l, td, qd;

int main()
{
    freopen("penalty.inp","r",stdin);
    freopen("penalty.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
    cin>>n;
    while(n--)
    {
        cin>>t>>q>>l;
        td=0, qd=0;
        while(l > 1)
        {
            if(t%l != 0 && q%l != 0)
            {
                l--;
            }
            else
            {
                if((t%l == 0 && q%l == 0) || t%l == 0)
                {
                    t--;
                    td++;
                }
                else
                {
                    q--;
                    qd++;
                }
            }
        }
        cout<<td<<" "<<qd<<"\n";
    }
}
