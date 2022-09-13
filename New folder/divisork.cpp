
#include<bits/stdc++.h>
using namespace std;
int a[105], n, k, x;

int main()
{
        cin>>n>>k;
        x=0;
        for(int i = 0; i < n; i++)
        {


            cin>>a[i];
            if(a[i]%k==0)
                x=x+1;
        }
        cout<<x;
}
