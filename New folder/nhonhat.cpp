#include<bits/stdc++.h>
using namespace std;
int a[105], n, m;

int main()
{
    cin>>n;
    cin>>a[0];
    m = a[0];
    for(int i = 1; i<n; i++)
    {
        cin>>a[i];
        if(m > a[i])
        {
            m=a[i];
        }


    }

    cout<<m;
}
