#include<bits/stdc++.h>
using namespace std;
long long a[1005], n, q, s, i, j, m;

int main()
{
    cin>>n>>q;
    m=0;
    for(int x = 1; x <= n; x++)
        {
            cin>>a[x];

        }
    for(int x = 1; x <= q; x++)
    {
        m=0;
        cin>>i>>j;
        m = a[x];
        for(int t = i; t <= j ư ; t++)
        {
            if(m > a[t])
                m = a[t];
        }
        cout<<m<<endl;
    }


}
