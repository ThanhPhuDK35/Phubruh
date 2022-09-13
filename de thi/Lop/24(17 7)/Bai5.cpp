#include<bits/stdc++.h>
using namespace std;
string s, a[1000001];
long long n, e;

int main()
{
    freopen("Bai5.inp","r",stdin);
    freopen("Bai5.out","w",stdout);
    cin>>s;
    n=s.size();
    for(int i=0; i<s.size(); i++)
    {
        a[i]=s[i];
    }
    sort(a, a+n);
    e=1;
    for(int i=1; i<n; i++)
    {
        if(a[i] == a[i-1])
            e++;
        else
        {
            cout<<a[i-1]<<":    ";
            cout<<double(e)/double(n)*100<<"%"<<"\n";
            e=1;
        }
    }
}
