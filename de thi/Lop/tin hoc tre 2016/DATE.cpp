#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("DATE.INP","r",stdin);
    freopen("DATE.OUT","w",stdout);
    long long n,t,na,g,m,x;
    cin>>n>>t>>na>>g;
    if (((na%4==0)&&(na%100!=0))||(na%400==0))
        x=29;
    else
        x=28;
    if ((t==1)||(t==3)||(t==5)||(t==7)||(t==8)||(t==10)||(t==12))
        m=31;
    if ((t==4)||(t==6)||(t==9)||(t==11))
        m=30;
    if (t==2)
        m=x;
        if (n+g>m)
        {
            if (t==12)
            {
                na++;
                t=1;
            }
            else t++;
            n=n+g-m;
        }
        else
            n+=g;
    cout<<n<<" "<<t<<" "<<na;
}