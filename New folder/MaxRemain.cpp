#include<bits/stdc++.h>
using namespace std;
long long n, a[2000002], d=0;

int main()
{
    freopen("MaxRemain.inp","r",stdin);
    freopen("MaxRemain.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    sort(a+1, a+1+n);
    for(int i=1; i<=n-1; i++)
    {
        if(a[i] == 1 || a[i]==a[i-1]) continue;
        else
        {
            long long t=1, lef, rig, mid, e;
            while(a[i] * t < a[n])
            {
                if(a[n] < a[i]*(t+1))
                {
                    d=max(d, a[n]-a[i]*t);
                    break;
                }
                lef=1;
                rig=n;
                e=0;
                while(lef <= rig)
                {
                    mid=(lef+rig)/2;
                    if(a[mid] < a[i] * (t+1))
                    {
                        if(a[i]*t < a[mid])
                            e=a[mid]-a[i]*t;
                        lef=mid+1;
                    }
                    else
                    rig=mid-1;

                }
                d=max(d, e);
                t++;
            }
        }
    }
    cout<<d;
}