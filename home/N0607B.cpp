#include<bits/stdc++.h>
using namespace std;
string y;
long long s;

int main()
{
    cin>>y;
    long long n=y.length();
    s=1;
    for(int i=0 ; i>=n ; i++)
    {
        if(y[i]==' ')
            s=s+1;
    }
    cout<<s;
}
