#include<iostream>

using namespace std;

typedef long long ll;
char a[1010][1010];

void solve()
{
    ll n;
    cin >> n;
    for (ll i = 1; i <= n; i++)
        for (ll j = 1; j <= n; j++)
            cin >> a[i][j];
    ll idx = 2;
    string s = "";
    s += '1';
    while (idx <= n)
    {
        ll p = 0;
        char x;
        bool f = 0;
        for (ll i = 1; i < idx; i++)
        {
            if (a[idx][i] == '1')
            {
                bool ff = 1;
                for (ll j = i + 1; j < idx; j++)
                {
                    if (a[idx][j] == '0')
                    {
                        ff = 0;
                        break;
                    }
                }
                if (ff)
                {
                    x = i + '0';
                    ll pp = s.find(x);
                    p = max(pp, p);
                    f = 1;
                }
            }
        }
        if (f) p++;
        char xx = idx + '0';
        s.insert(p, 1, xx);
        idx++;
    }
    for (ll i = 0; i < s.size(); i++) cout << s[i] << " ";
    cout << endl;
}

signed main()
{
    ll t;
    cin >> t;
    while (t--) solve();
}