#include<bits/stdc++.h>
using namespace std;
long long s, a, b, t;

int main()
{
    freopen("TwoRobotCandy.inp","r",stdin);
    freopen("TwoRobotCandy.out","w",stdout);
    cin>>a>>b;
    s=a+b;
    if(s%3 != 0)
    {
        cout<<"No";
        return 0;
    }
    if(s%3 == 0)
    {
        t=s/3;
        if(a<t || b<t) { cout<<"No"; return 0;}
        for(int i=1; i<= t; i++)
        {
            if(a>b)
            {
                cout<<'2'<<' '<<'1'<<'\n';
                a=a-2;
                b=b-1;
            }
            else
            {
                cout<<'1'<<' '<<'2'<<'\n';
                a=a-1;
                b=b-2;
            }
        }


    }
}
