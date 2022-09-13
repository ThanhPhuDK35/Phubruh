#include<bits/stdc++.h>
using namespace std;
long long s, x;

int main()
{
    freopen("count.inp","r",stdin);
    freopen("count.out","w",stdout);
    cin>>x;
    s=0;
    for(long long i = 1; i <= sqrt(x) ; i++)
    {
        if(x%i==0)
        {
            s++;
            if(x/i != i)
            s++;
        }
    }
cout<<s;
}
