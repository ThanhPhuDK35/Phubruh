#include<bits/stdc++.h>
using namespace std;
bool nt[10000009];

void slnt()
{
    memset(nt, true, sizeof(nt));
    nt[1]=false;
    for(int i=2; i*i<=10000009; i++)
    {
        if(nt[i])
        {
            for(int j=i*i; j<=10000009; j+=i)
            {
                nt[j]=true;
            }
        }
    }
}
