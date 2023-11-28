#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int test;

    cin >> test;


    for(int t = 1; t <= test; t++)
    {
        cout << "Case " << t << ": ";


        ll n;

        cin >> n;

        ll s = sqrt(n);

        if(sqrt(n) > s)
            s++;

        if(s % 2 == 0)
        {
            ll x = s, y = 1;

            ll first = s * s;

            if((first - n) < s)
            {
                cout << x << " " << y + (first - n) << "\n";
            }

            else
            {
                y = s;

                ll second = first - s + 1;

                cout << s - second + n << " " << y << "\n";
            }
        }

        else
        {
            ll x = 1, y = s;

            ll first = s * s;

            if((first - n) < s)
            {
                cout << x + (first - n)<< " " << y << "\n";
            }

            else
            {
                x = s;

                ll second = first - s + 1;

                cout << x  << " " << s - (second - n)  << "\n";
            }
        }
    }

    return 0;
}
