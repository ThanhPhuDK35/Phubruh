#include<bits/stdc++.h>
using namespace std;
long long l, r, s, f;

bool nto(long long x)
{
    if (x < 2) return false;
    if (x <= 3) return true;
    if (x % 2 == 0) return false;
    for (int i=3;i<=sqrt(x);i+=2)
        if (x % i == 0)
            return false;
    return true;
}


int main()
{
    //freopen("NT.inp","r",stdin);
    //freopen("NT.out","w",stdout);
    cin>>l>>r;
    s=1;
    for(int i=l; i<=r; i++)
    {
        if(nto(i) == true)
        {
            f=f+(i*s);
            s++;
        }
        f=f%1000000007;
    }
    cout<<f;
}
