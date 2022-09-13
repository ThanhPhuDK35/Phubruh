#include<bits/stdc++.h>
using namespace std;
long long a, s;

bool nt(long long x)
{
    long long s=0;
    for(int i=2; i*i<=x; i++)
        if(x%i==0)
          return false;
     return x>1;

}

int main()
{
    freopen("BAI1.inp","r",stdin);
    freopen("BAI1.out","w",stdout);
    cin>>a;

    s=0;
    for(int i=1; i<=a/2; i++)
    {
        if(nt(i)==true && nt(a-i)==true && i+(a-i)==a)
        {
            s++;
        }
    }
    cout<<s;
}

