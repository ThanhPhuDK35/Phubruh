#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a, b, s, m;

int main()
{
    freopen("T1G2.Inp", "r", stdin);
    freopen("T1G2.Out", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
    cin>>a>>b;
    s=0;
    while(a != b)
    {
        if(a>b)
        {
            if(a - b >= 2)
               a=a-2;
            else
               b=b+1;
            s++;
        }
        else{
        if(a < b)
        {
            if(b-a >= 2)
               b=b-2;
            else
               a=a+1;
            s++;
        }
        }
    }
    cout<<s;
}