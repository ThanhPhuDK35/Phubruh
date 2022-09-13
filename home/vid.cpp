#include<bits/stdc++.h>
using namespace std;
string a[100001], m;
long long n, s, ma=0;

int main()
{
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        s=0;
        for(int j=i+1; j<n; j++)
        {
            if(a[i]==a[j])
                s++;
        }
        if(ma<s)
        {
            m=s;
            m=a[i];
        }
    }
    cout<<m;
}
