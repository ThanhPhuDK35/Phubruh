#include<bits/stdc++.h>
using namespace std;
string st;
int n, k, x, y, s;

int main()
{
    cin>>k;
    cin>>st;
    n=st.size();
    x=0;
    y=0;
    s=0;
    for(int i=0; i<k ; i++)
    {
        if(st[i]=='a')
        {
            s++;
            x=s;
            y=1;
        }
    }
    for(int i=k; i<n ; i++)
    {
        if(st[i]=='a')
            s++;
        if(st[i-k]=='a')
            s--;
        if(s>x)
            {
                x=s;
                y=1;
            }
        else
            if(s==x) y++;
    }
    cout<<x<<' '<<y;
}
