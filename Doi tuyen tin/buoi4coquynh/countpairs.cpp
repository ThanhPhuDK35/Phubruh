#include<bits/stdc++.h>
using namespace std;
long long t, k, s, ans;

int main()
{
    freopen("countpairs.inp","r",stdin);
    freopen("countpairs.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
    cin>>t;
    while(t--)
    {
        cin>>k;
        ans=0;
        for(int i=1; i<k; i++)
        {
            s=k-i;
            if(s - i > 0)
            {
                ans=ans+(s-i);
            }
            else
                break;
        }
        cout<<ans<<"\n";
    }
}