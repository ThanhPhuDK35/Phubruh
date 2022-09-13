#include <bits/stdc++.h>
using namespace std;
long long n, chan[200001], le[200001], c, l;
string s;


bool dequy(long long dau, long long cuoi)
{
    if(cuoi-dau+1 == 1 || cuoi-dau+1==0) return 1;
    else
    {
        if(s[dau] != s[cuoi]) return 0;
        else
        {
            return dequy(dau+1, cuoi-1);
        }
    }
}

bool ac(long long h)
{
    for(int i=0; i<=n-h-1; i++)
    {
        if(dequy(i, i+h-1)) return true;
    }
    return false;
}

long long tkchan(long long b[], long long h)
{
    long long dau=2, cuoi=h, mid, kq;
    while(dau <= cuoi)
    {
        mid=(dau+cuoi)/2;
        if(ac(b[mid]) == true)
        {
            kq=b[mid];
            dau=mid+1;
        }
        else
            cuoi=mid-1;
    }
    return kq;
}

long long tkle(long long b[], long long h)
{
    long long dau=1, cuoi=h, mid, kq;
    while(dau <= cuoi)
    {
        mid=(dau+cuoi)/2;
        if(ac(b[mid]) == true)
        {
            kq=b[mid];
            dau=mid+1;
        }
        else
            cuoi=mid-1;
    }
    return kq;
}

int main()
{
    cin>>n>>s;
    for(int i=1; i<=n; i++)
    {
        if(i%2==1)
        {
            l++;
            le[l]=i;
        }
        else
        {
            c++;
            chan[c]=i;
        }
    }
    cout<<max(tkchan(chan, c), tkle(le, l));
}