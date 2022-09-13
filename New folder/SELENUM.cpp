#include <bits/stdc++.h>
using namespace std;
long long n, dem = 0;
string s, b[10000009];

bool sx(string a, string b)
{
    if (a.size() < b.size()) return true;
    else if (a.size() > b.size()) return false;
    else{
        for (int i = 0; i < a.size(); i++){
            if (a[i] < b[i]) return true;
            else if (a[i] > b[i]) return false;
        }
        return true;
    }
}

int main()
{
    //freopen("Selenum.Inp", "r", stdin);
    //freopen("Selenum.Out", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    while(n--)
    {
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= '0' && s[i] <= '9') dem++;
            while(i < s.size() && s[i] >= '0' && s[i] <= '9')
            {
                b[dem] += s[i]; i++;
            }
        }
    }
    for (int i = 1; i <= dem; i++)
    {
        while(b[i].size() > 1 && b[i][0] == '0')
        {
            b[i].erase(0, 1);
        }
    }
    sort(b+1, b+1+dem, sx);
    for (int i = 1; i <= dem; i++)
    {
        cout << b[i] << "\n";
    }
}
