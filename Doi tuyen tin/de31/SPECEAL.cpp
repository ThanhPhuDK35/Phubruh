#include<bits/stdc++.h>
using namespace std;
long long n, a[10000001], s;

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
    freopen("SPECEAL.inp","r",stdin);
    freopen("SPECEAL.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    s=0;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        if(tnum(a[i]) == true)
            s++;
    }
    cout<<s;

}














