#include<bits/stdc++.h>
using namespace std;
int a[105], n, s, p;

int main()
{
    cin>>n;

        for(int i = 0; i < n; i++)
        {
            cin>>a[i];
            if(i < n/2)
            {
                s=s+a[i];
            }
            else
            {
                p=p+a[i];
            }

        }
cout<<s<<endl<<p;


}
