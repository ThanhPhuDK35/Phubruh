#include<bits/stdc++.h>
using namespace std;
long long n, a[1000001], s;
bool check=0;

int main()
{
    freopen("Increa.inp","r",stdin);
    freopen("Increa.out","w",stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 2; i <= n; i++)
    {
        if (a[i] < a[i-1] && check == 0)
        {
            if (a[i+1] < a[i-1] && i != n && i != 2)
            {
                cout << "No"; return 0;
            }
            else if (i == n)
            {
                cout << "Yes"; return 0;
            }
            else
            {
                check = 1;
            }
        }
        else if (a[i] < a[i-1] && check == 1)
        {
            cout << "No"; return 0;
        }
    }
    cout << "Yes";
}
