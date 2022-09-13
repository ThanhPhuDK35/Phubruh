#include<bits/stdc++.h>
using namespace std;
string s;

int main()
{
    freopen("NewsMark.inp","r",stdin);
    freopen("NewsMark.out","w",stdout);
    cin>>s;
    long long j=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]<='9')
        {
            cout<<s[i];
            j++;
        }
        if(s[i]>='A'&&s[i]<='z'&&s[i+1]<='9')
            if(j>0)
        {
            cout<<" ";
        }
    }


}
