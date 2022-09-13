#include<bits/stdc++.h>
using namespace std;
long long n, b, s;

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
    cin>>n;
    if(nt(n)==false)
        cout<<"NO";

    else
    {
        s=0;
        while(n>9)
        {
            b=n%10;
            n=n/10;
            if(nt(b)==false)
                {
                cout<<"NO";
                s=1;
                break;

                }
        }
        if(s==0)
           cout<<"YES";
    }

}
