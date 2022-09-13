#include<bits/stdc++.h>
using namespace std;
long long d, k, s, dem;

bool socuoi(long long a, long long b)
{
    long long a1, b1;    
    a=a/10;
    while(a > 0)
    {
        a1=a%10;
        b1=b%10;
        if(a1 != b1) return false;
        a=a/10;
        b=b/10;
    }
    if(b == d) return true;
    else return false;
    
}

int main()
{
    freopen("BAI3.inp","r",stdin);
    freopen("BAI3.out","w",stdout);
    cin>>d>>k;
    s=d;
    while(true)
    {
        long long e=s*k;
        if(socuoi(s, e) == true)
        {
            cout<<s;
            return 0;
        }
        else
        {
            s+=10;
        }
    }
}