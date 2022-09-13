#include<bits/stdc++.h>
using namespace std;
long long n, e, x;
string s;

int main()
{
    freopen("MoveLine.inp","r",stdin);
    freopen("MoveLine.out","w",stdout);
    cin>>n>>s;
    x=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == 'R')
           x++;
        else
           x--;
    }
    cout<<x;
}