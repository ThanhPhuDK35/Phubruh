#include<bits/stdc++.h>
using namespace std;
long long k, n;
string s;

int main()
{
    freopen("chuso.inp","r",stdin);
    freopen("chuso.out","w",stdout);
    cin>>k>>s;
    for(int i=0;i<s.size(); i++)
    {
        char m=s[s.size()-1];
        n=s.size()-1;
        for(int j=s.size()-1;j>i && k>0; j--)
        {
            if(m<s[j])
            {
                m=s[j];
                n=j;
            }
            if(m>s[i])
            {
                swap(s[i],s[n]);
                k++;
            }
        }
    }
    cout<<s;
}