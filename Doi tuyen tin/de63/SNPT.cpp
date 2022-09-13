#include <bits/stdc++.h>
using namespace std;
long long n, s, x[25];

bool check()
{
    long long sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += x[i];
        if (sum > s) 
            return false;
    }
    if (sum == s) 
        return true;
    else 
        return false;
}

void xu_ly_nghiem()
{
    if (check())
    {
        for (int i = 1; i <= n; i++)
        {
            cout << x[i] << " ";
        }
        cout << "\n";
    }
}

void Try(long long i)
{
    for (int j = 1; j <= s-n+1; j++)
    {
        x[i] = j;
        if (i == n) 
            xu_ly_nghiem();
        else 
            Try(i+1);
    }
}
int main()
{
    freopen("SNPT.Inp", "r", stdin);
    freopen("SNPT.Out", "w", stdout);
    cin >> n >> s;
    Try(1);
}