#include<bits/stdc++.h>
using namespace std;
long long s, x, a[10000001];


int main()
{
    freopen("LKU.inp","r",stdin);
    freopen("LKU.out","w",stdout);
    cin>>x;
    s=1;
    for(long long i = 1; i <= sqrt(x) ; i++)
    {
        if(x%i==0)
        {
            a[s]=i;
            s++;
            if(x/i != i)
            {
              a[s]=x/i;
              s++;
            }

        }
    }
    sort(a+1, a+s);
    for(int i=1; i<=s-1; i++)
    {
        cout<<a[i]<<" ";
    }
}
