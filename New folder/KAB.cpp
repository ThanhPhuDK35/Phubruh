#include<bits/stdc++.h>
using namespace std;
string s, y;
long long l, kq, dem, q, e, a[1000001];

int main()
{
    freopen("KAB.inp","r",stdin);
    freopen("KAB.out","w",stdout);
    cin>>s;
    l=s.size()-1;
    e=0;
    for(int i=0; i<=l; i++)
    {
        if(s[i] == 'A') e++;
        else
        {
            dem+=e;
        } 
    }
    cout<<dem;
}