#include<bits/stdc++.h>
using namespace std;
long long n, s;

long long nto(long long x)
{
    if(x<2) return false;
    if(x<=3) return true;
    if(x%2 == 0) return false;
    for(int i=3; i<= sqrt(x); i+=2)
      if(x%i==0) return false;
    return true;
}

int main()
{
    freopen("SUM.inp","r",stdin);
    freopen("SUM.out","w",stdout);
    cin>>n;
    for(int i=1; i<n;i++)
    {
        if(nto(i) == true)
        {
            cout<<i<<" ";
            s=s+i;
        }

    }
    cout<<"\n";
    cout<<s;
}
