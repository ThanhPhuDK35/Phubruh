#include<bits/stdc++.h>
using namespace std;
string s;
long long  n, a[1000001], e=1;

int main()
{
    cin>>s;
    n=s.size();
    for(int i=0; i<n; i++)
    {
        if(s[i] == '1' || s[i] == '2' || s[i] == '3' || s[i] == '4' || s[i] == '5' || s[i] == '6' || s[i] == '7' || s[i] == '8' || s[i] == '9' || s[i] == '0' )
        {
            a[e]=s[i]-48;
            e++;
        }
    }
    sort(a+1, a+e);
    long long t, r, m;
    for(int i=1; i<e; i++)
    {
        t++;
        if(a[i] != a[i+1])
        {
            if(m<t)
                {
                m=t;
                r=a[i];
                }
            t=0;
        }

    }
    cout<<r;

}
