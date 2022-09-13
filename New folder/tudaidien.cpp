#include <bits/stdc++.h>
using namespace std;
string s, p, s2[1000001];
long long dem = 1, b[1000001], ans = 0;
bool c;

int main()
{
    freopen("TuDaiDien.Inp", "r", stdin);
    freopen("TuDaiDien.Out", "w", stdout);
    getline(cin,s);
    cin>>p;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ') 
            dem++;
        else 
            s2[dem] += s[i];
    }
    for (int i = 0; i < p.size(); i++)
    {
        if (p[i] == '?') 
            b[i] = -1e18;
        else 
            b[i] = p[i];
    }
    for (int i = 1; i <= dem; i++)
    {
        c = 1;
        if (s2[i].size() == p.size())
        {
            for (int j = 0; j < s2[i].size(); j++)
            {
                if (b[j] != -1e18 && s2[i][j] != b[j])
                {
                    c = 0; 
                    break;
                }
            }
        }
        else 
            c = 0;
        ans += c;
    }
    cout << ans;
}