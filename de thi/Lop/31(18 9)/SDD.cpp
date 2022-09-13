#include<bits/stdc++.h>
using namespace std;
string a;
long long s, m;

int main()
{
    freopen("SDD.inp","r",stdin);
    freopen("SDD.out","w",stdout);
    cin>>a;
    s=1;
    if(a.size() == 1 || (a.size() == 2 && a[0] == a[1]))
    {
        cout<<"1"; return 0;
    }
    if(a.size() == 2 && a[0] != a[1])
    {
        cout<<"2"; return 0;
    }
    for(int i=1; i<a.size(); i++)
    {
        if((a[i]-a[i-1])*(a[i+1]-a[i]) < 0)
           s++;
        else
        {
            if(m < s) m = s+2;
            s=0;
        }
        if(s>m) m=s+2;
    }
    cout<<m;
}