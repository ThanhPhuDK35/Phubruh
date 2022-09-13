#include <bits/stdc++.h>
using namespace std;
int n;
long long sum;
int main()
{
    freopen("SHH.inp","r",stdin);
    freopen("SHH.out","w",stdout);
    cin>>n;
    for(int i=1; i<=sqrt(n); i++)
        if(n%i==0)
        {
            sum+=i;
            int j=n/i;
            if(j!=i)
                sum+=j;
        }
    cout<<(sum==n*2 ? "YES" : "NO");
    return 0;
}
