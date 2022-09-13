#include <bits/stdc++.h>
using namespace std;
long long n, a[10001][10001];

int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            cout<<a[i][j];
}
