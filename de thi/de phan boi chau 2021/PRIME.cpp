#include<bits/stdc++.h>
using namespace std;
long long n, s;

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


long long tnum(long long x)
{
    if(x==(long long)(sqrt(x))*(long long)(sqrt(x)) && nto(sqrt(x))==true)
        return true;
    else
        return false;
}


int main()
{
    freopen("PRIME.inp","r",stdin);
    freopen("PRIME.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        if(tnum(i) == true)
            s++;
    }
    cout<<s;

}
