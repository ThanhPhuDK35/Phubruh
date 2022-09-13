#include <bits/stdc++.h>
using namespace std;
long long a, b, c, n, z;
string s, e;

bool mk(long long x, long long y)
{
    a=0; b=0; c=0;
    for(int i=x; i<=y ; i++)
    {
        if(s[i] >= 48 && s[i] <= 57)
            a++;
        if(s[i] >= 65 && s[i] <= 90)
            b++;
        if(s[i] >= 97 && s[i] <= 122)
            c++;
        if(a >= 1 && b >= 1 && c >= 1)
        {
            return true;
            break;
        }
    }
        return false;
}

int main()
{
    freopen("Matkhau.inp", "r", stdin);
    freopen("Matkhau.out", "w", stdout);
    cin>>s;
    n=s.size();
    for(int i=0; i<n-5; i++)
    {
        for(int j=i+5; j<n; j++)
        {
            if(mk(i, j) == true )
            {
                z++;
            }
        }
    }
    cout<<z;
}
