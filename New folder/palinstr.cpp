#include<bits/stdc++.h>
using namespace std;
string s;
long long x;

long long palin(string y)
{
    long long s=0;
    string x = "";
    int n = y.length();
    for(int i = n-1; i >=0; i--)
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
    cin>>s;

}
