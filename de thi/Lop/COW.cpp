#include<bits/stdc++.h>
using namespace std;
long long n, c, o, w;
string s;

int main()
{
    freopen("COW.inp","r",stdin);
    freopen("COW.out","w",stdout);
    cin>>n>>s;
    for(int i=0; i<n; i++)
    {
        if(s[i] == 'C')
            c++;
        if(s[i] == 'O')
            o=o+c;
        if(s[i] == 'W')
            w=w+o;
    }
    cout<<w;
}
