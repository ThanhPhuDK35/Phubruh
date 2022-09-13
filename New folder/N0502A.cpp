#include<bits/stdc++.h>
using namespace std;
long long n, a[100000001], j;

int main()
{
    cin>>n;
    j=0;
    for(int i=0; i<n; i++)
    {

        for(int e=j; e<j+n; e++)
        {
            cin>>a[j];
            cout<<j<<endl;

        }
      j+=n;
    }

    j=0;
        for(int i=0; i<n; i++)
    {
        for(int e=j; e<j+n; e++)
        {
            cout<<a[j]<<" ";

        }
        j+=n;
        cout<<"\n";
    }

}
