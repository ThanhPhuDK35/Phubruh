#include<bits/stdc++.h>
using namespace std;
int a[105], n, s, p;

int main()
{
        cin>>n;
        for(int i = 0; i < n; i++)
            cin>>a[i];
        for(int i = n - 1 ; i >= 0; i--)
            cout<<a[i]<<' ';

}
