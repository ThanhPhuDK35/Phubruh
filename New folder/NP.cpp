#include<bits/stdc++.h>
using namespace std;
long long n, x;
bitset<20> b;

void inra()
{
    for(int i= n-1; i>= 0; i--)
    {
          cout<<b[i];
    }
    cout<<"\n";
}

int main()
{
    //freopen("NP.inp","r",stdin);
    //freopen("NP.out","w",stdout);
    cin>>n;
    x=1<<n;
    for(int i=0; i<x; i++)
    {
        b = bitset<20>(i);  
        inra();
    }
}