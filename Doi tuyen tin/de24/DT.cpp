#include<bits/stdc++.h>
using namespace std;
long long h, m, a, b, s;
bool dt=false;

bool check(long long a, long long b)
{
    long long s=0, c;
    map<long long, long long> cc;
    if(a == 0 || b == 0) return false;
    while(a > 0)
    {
        c=a%10;
        cc[c]++;
        a=a/10;
        s++;
    }
    while(b > 0)
    {
        c=b%10;
        cc[c]++;
        b=b/10;
        s++;
    }
    if(cc[c] == s)
        return true;
    else
        return false;
}

int main()
{
    freopen("DT.inp","r",stdin);
    freopen("DT.out","w",stdout);
    cin>>h>>m;
    a=0; b=0; s=0;
    while(dt == false)
    {
        if(check(a, b) == true)
        {
            s++;
        }
        b++;
        if(b == m && a == h)
        {                 
            break;
        }
        if(b == 59)
        {
            b=0;
            a++;
        }
    }
    cout<<s+1;
}
