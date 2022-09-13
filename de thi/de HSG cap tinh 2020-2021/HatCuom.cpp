#include<bits/stdc++.h>
using namespace std;
long long n, x, t;
string s;

int main()
{
    freopen("HatCuom.inp","r",stdin);
    freopen("HatCuom.out","w",stdout);
    cin>>n>>s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == 'X')
            x++;
        else
            t++;
    }
    for(int i=0; i<x; i++)
        cout<<"X";
    for(int i=0; i<t; i++)
        cout<<"T";
}
