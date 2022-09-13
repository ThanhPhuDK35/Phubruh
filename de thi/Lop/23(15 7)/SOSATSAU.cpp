#include<bits/stdc++.h>
using namespace std;
string s, st;
char tg;
long long i, j, l;
bool ds=true;

int main()
{
    freopen("SOSATSAU.inp","r",stdin);
    freopen("SOSATSAU.out","w",stdout);
    cin>>l;
    while(cin >> st)
        s+=st;
    i=l-1;
    while(s[i-1] >= s[i])
    {
        i--;
        if(i == 0)
        {
            ds=false;
            cout<<"0";
            break;
        }
    }
    if(ds == true)
    {
        j=i;
        for(i=l-1; i>=j; i--)
            if(s[i] > s[j-1])
            {
                tg=s[i];
                s[i]=s[j-1];
                s[j-1]=tg;
                break;
            }
        sort(s.begin() + j,s.end());
        cout<<s;
    }
    return 0;
}
