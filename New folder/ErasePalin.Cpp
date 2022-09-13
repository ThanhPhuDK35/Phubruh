#include<bits/stdc++.h>
using namespace std;
long long t, n, a[200001];

bool erase(long long x, long long a[], long long n)
{
    long long b[n], m=0;
    for(int i=1; i<=n; i++)
    {
        if(a[i] != x)
        {
            b[++m]=a[i];
        }
    }
    for(int i=1; i<=m; i++)
    {
        if(b[i] != b[m-i+1])
            return false;
    }
    return true;
}

string solve(long long a[], long long n)
{
    long long l=1, r=n;
    while(l <= r)
    {
        if(a[l] == a[r])
        {
            l++; r--;
        }
        else
        {
            bool ans1 = erase(a[l], a, n);
            bool ans2 = erase(a[r],a, n);
            if(ans1 == true || ans2 == true)
                return "Yes";
            else
                return "No";
        }
    }
    return "Yes";

}

int main()
{
    freopen("ErasePalin.inp","r",stdin);
    freopen("ErasePalin.out","w",stdout);
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        cout<<solve(a, n)<<"\n";
    }
}