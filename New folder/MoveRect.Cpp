#include<bits/stdc++.h>
using namespace std;
long long n, a[10000001], x=0, e, m;
string s;

int main()
{
    freopen("MoveRect.inp","r",stdin);
    freopen("MoveRect.out","w",stdout);
    cin>>n>>s;
    a[1000]=1;
    e=1000;
    for(int i=0; i<s.size(); i++)
    {
        m=max(m, a[e]);
        if(s[i] == 'R')
        {
            e++;
            a[e]++;
        }
        else
        {
            e--;
            a[e]++;
        }
        m=max(m, a[e]);
    }
    cout<<m;
}