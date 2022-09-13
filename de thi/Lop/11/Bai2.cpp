#include<bits/stdc++.h>
using namespace std;
long long n, x, y, s;

bool nto(long long e)
{
    if (e < 2) return false;
    if (e <= 3) return true;
    if (e % 2 == 0) return false;
    for (int i=3;i<=sqrt(e);i+=2)
        if (e % i == 0)
            return false;
    return true;
}


int main()
{
    freopen("Bai2.inp","r",stdin);
    freopen("Bai2.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n/2; i++)
    {
        x=i;
        y=n-x;
        if(nto(x)==true && nto(y)==true)
        {
            s++;
        }
    }
    cout<<s;
}
