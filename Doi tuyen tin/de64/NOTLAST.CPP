#include<bits/stdc++.h>
using namespace std;
long long n, a[10], x;
string s;
map<long long, string> m;

int main()
{
    freopen("NOTLAST.inp","r",stdin);
    freopen("NOTLAST.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>s>>x;
        if(s == "Bessie")       a[1]+=x;
        if(s == "Elsie")        a[2]+=x;
        if(s == "Daisy")        a[3]+=x;
        if(s == "Gertie")       a[4]+=x;
        if(s == "Annabelle")    a[5]+=x;
        if(s == "Maggie")       a[6]+=x;
        if(s == "Henrietta")    a[7]+=x;
    }
    m[a[1]]="Bessie";
    m[a[2]]="Elsie";
    m[a[3]]="Daisy";
    m[a[4]]="Gertie";
    m[a[5]]="Annabelle";
    m[a[6]]="Maggie";
    m[a[7]]="Henrietta";    
    sort(a+1, a+8);
    for(int i=2; i<=7; i++)
    {
        if(a[i] > a[1])
        {
            if(a[i+1] == a[i])
            {
                cout<<"Tie";
                return 0;
            }
            else
            {
                cout<<m[a[i]];
                return 0;
            }
        }

    }
    cout<<"Tie";
}