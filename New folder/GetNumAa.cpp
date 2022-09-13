#include<bits/stdc++.h>
using namespace std;
long long s;
string n;

long long tong(string x)
{
    s=0;
    int y = x.length();
    for(int i = 0; i < y; i++)
    {
          if(x[i] == 'a'|| x[i]=='A')
          s++;
    }
    return s;
}


int main()
{
    freopen("GetNumAa.Inp","r",stdin);
    freopen("GetNumAa.Out","w",stdout);
    cin>>n;
    cout<<tong (n);
}
