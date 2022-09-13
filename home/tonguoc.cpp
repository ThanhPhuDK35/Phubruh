#include<bits/stdc++.h>
using namespace std;

long long n, s;

int main()
{
    cin>>n;
    s=0;
    for(long long i = 1; i <= sqrt(n) ; i++)
    {
        if(n%i==0)
        {
            s=s+i;
            if(n/i != i)
                s=s+n/i;
        }
    }
    cout<<s;

}
