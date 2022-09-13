#include<bits/stdc++.h>
using namespace std;
long long n, m, a[10001], s;

int main()
{
    freopen("election.Inp","r",stdin);
    freopen("election.Out","w",stdout);
    cin>>n>>m;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    if(m==1)
    {
        cout<<"0";
        return 0;
    }
    sort(a+1, a+1+n, greater<int>());
    s=1;
    while(m > 0)
    {
        m--;
        a[s]--;
        if(a[s] == 1 && m > 1)
        {
            s++;
            if(a[s] == 1)
            {
                cout<<"-1";
                return 0;
            }
        }
        if(m == 0)
        {
            cout<<s;
            return 0;
        }
    }

}
