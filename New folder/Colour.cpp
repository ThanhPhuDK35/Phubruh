#include<bits/stdc++.h>
using namespace std;
long long n, r, b;
string s;

int main()
{
    freopen("Colour.inp","r",stdin);
    freopen("Colour.out","w",stdout);
    cin>>n;
    cin>>s;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='R')
            r++;
        else
            b++;
    }
    if(r>b)
        cout<<"Red";
    if(b>r)
        cout<<"Blue";
    if(r==b)
        cout<<"RedEqualBlue";
}
