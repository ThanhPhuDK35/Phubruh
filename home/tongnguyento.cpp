#include<bits/stdc++.h>
using namespace std;

long long a, b, c, n;
long long hehe(long long x)
{
    b=0;
    c=0;
        while(x > 0)
    {
        b = x % 10;
        x = x / 10;
        c=c+b;
    }
    return c;
}

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

    if (haha(hehe(n))== true)
        cout<<"YES";
    else
        cout<<"NO";

}
