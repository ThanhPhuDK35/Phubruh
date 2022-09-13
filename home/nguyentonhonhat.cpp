#include<bits/stdc++.h>
using namespace std;
long long n;

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
    for(long long i=n-1; i>= 0 ; i-- )
    {
        if(haha(i)==true)
        {
            cout<<i;
            break;
        }
    }

}


