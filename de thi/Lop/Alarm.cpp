#include<bits/stdc++.h>
using namespace std;
long long hh, mm, s, x;
bool kq=false;

bool bay(long long a, long long b)
{
    long long w, e, r, t;
    w=a%10; e=a/10; r=b%10; t=b/10;
    if(w == 7 || e==7 || r==7 || t==7)
    {
        return true;
    }
    else 
        return false;
}

int main()
{
    freopen("Alarm.inp","r",stdin);
    freopen("Alarm.out","w",stdout);
    cin>>x>>hh>>mm;
    if(bay(hh, mm) ==true)
    {
        cout<<"0"; return 0;
    }
    while(kq == false)
    {
        mm=mm-x;
        if(mm < 0)
        {
            mm=mm+60;
            hh=hh-1;
        }
        if(hh < 0)
        {
            hh=23;
        }
        s++;
        if(bay(hh, mm) == true)
        {
            kq=true;
            break;
        }
    }
    cout<<s;
}