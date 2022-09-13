#include<bits/stdc++.h>
using namespace std;
long long n, a[100000001], s, t, z;

bool nto(long long x)
{
    if (x < 2) return false;
    if (x <= 3) return true;
    if (x % 2 == 0) return false;
    for (int i=3;i<=sqrt(x);i+=2)
        if (x % i == 0)
            return false;
    return true;
}

int main()
{
    freopen("Prime3.inp","r",stdin);
    freopen("Prime3.out","w",stdout);
    cin>>n;
    if(n<=12)
        cout<<"-1";
    else
    {
        for(int i=3; i<=sqrt(n) ; i++)
        {
            if(nto(i) == true)
            {
                z=4+i*i;
                if(nto(z) == true)
                {
                    cout<<"2"<<" "<<i<<" "<<z<<"\n";
                }
            }
        }
    }
}

