#include <bits/stdc++.h>
using namespace std;
long long a[1000005], n, x, s, m;

bool doixung(long long i, long long j)
{
    long long l = i;
    long long r = j;
    while(l < r)
    {
        if(a[l] != a[r]) return false;
        l++;
        r--;
    }
    return true;
}

int main()
{
    //freopen("DAYDX.inp","r",stdin);
    //freopen("DAYDX.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=n; j>=i; j--)
        {
            if(doixung(i, j) == true)
            {
                s=j-i+1;
                if(m<s)
                {
                    m=s;
                    x=i;
                }
            }
        }
    }
    if(x == 1 && m==1)
    {
        cout<<"0";
        return 0;
    }
    cout<<x<<" "<<m;
}
