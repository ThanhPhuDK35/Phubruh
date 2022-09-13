#include<bits/stdc++.h>
using namespace std;
long long n, a, b;
string s;

int main()
{
    freopen("CHE.inp","r",stdin);
    freopen("CHE.out","w",stdout);
    cin>>n>>s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == 'A') a++;
        if(s[i] == 'B') b++;
    }
    if(a > b)
    {
        cout<<">";
    }
    if(b > a)
    {
        cout<<"<";
    }
    if(b == a)
    {
        cout<<"=";
    }
}
