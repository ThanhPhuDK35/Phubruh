#include<bits/stdc++.h>
using namespace std;
long long n, s, a;

bool haha(long long x)
{
    if(x<=1) return false;
    else
    {
        for(long long i=2; i<= sqrt(x); i++)
        {
            if(x%i==0)
            {
              return false;
            }

        }
        return true;
    }
}


int main()
{
    cin>>n;
    s=0;
    a=2;
    while(s != n)
    {
       if(haha(a)==true)
       {
           s++;
       }
       a++;
    }
    cout<<a-1;
}
