#include<bits/stdc++.h>
using namespace std;
long long s, n;
string st, a;

int main()
{
    freopen("BAI2.inp","r",stdin);
    freopen("BAI2.out","w",stdout);
    cin>>st;
    sort(st.begin(), st.end());
    for (long long i=0; i<st.length(); i++)
            if(st[i]!=st[i+1])
            n++;
    for(int i=0; i<st.size(); i++)
    {
        if(st[i] <= 57 && st[i] >= 48)
        {
            a=a+st[i];
            st.erase(i, 1);
            i--;
        }
        else
          break;
    }
    cout<<n<<"\n";
    if(st != ""){
    cout<<st[0]<<" ";
    s=1;
    for(int i=1; i<st.size(); i++)
    {
        if(st[i] == st[i-1]) s++;
        else
        {
            cout<<s<<"\n";
            cout<<st[i]<<" ";
            s=1;
        }
    }
    cout<<s<<"\n";}
    if(a != ""){
    cout<<a[0]<<" ";
    s=1;
    for(int i=1; i<a.size(); i++)
    {
        if(a[i] == a[i-1]) s++;
        else
        {
            cout<<s<<"\n";
            cout<<a[i]<<" ";
            s=1;
        }
    }
    cout<<s;}
}