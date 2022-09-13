#include<bits/stdc++.h>
using namespace std;
long long a[100005], n, k, s;

int main()
{
    freopen("sum2k.inp","r",stdin);
    freopen("sum2k.out","w",stdout);
    cin>>n>>k;
    s=0;
     for(int i = 0; i < n; i++)
        {
            cin>>a[i];
            if(a[i] == 2*k)
            {
                s=s+a[i];
            }

        }
        cout<<s;

}
