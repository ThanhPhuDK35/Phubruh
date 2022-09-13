#include<bits/stdc++.h>
using namespace std;
string s, y;
long long l, kq;

void dequy(long long i)
{
    if(i == -1) return;
    else
    {
        y=y+s[i];
        if(y.size() == 2) 
        {
            if(y == "BA") {kq++; y=""; dequy(i-1);}
            else
            {y=""; dequy(i);}
        }
        else
        dequy(i-1);
    }
}

int main()
{
    freopen("SubAB.inp","r",stdin);
    freopen("SubAB.out","w",stdout);
    cin>>s;
    l=s.size()-1;
    kq=0;
    dequy(l);
    cout<<kq;
}