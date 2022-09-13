#include<bits/stdc++.h>
using namespace std;
string st, z;
long long e, dem;

bool doix(string y)
{
    long long s=0;
    string x = "";
    long long n = y.length();
    for(long long i = n-1; i >=0; i--)
    {
       x = x + y[i];
    }
    if(x==y)
        return true;
    else
        return false;
}

int main()
{
    cin>>st;
    e=st.size();
    st=st+st;
    dem=0;
    for(long long i=0 ; i<st.size()-e-1; i++)
    {
        z="";
        for(long long j=i; j<e+i; j++)
        {
            z=z+st[j];
        }
        if(doix(z) == true)
            dem++;
    }
    cout<<dem;
}
