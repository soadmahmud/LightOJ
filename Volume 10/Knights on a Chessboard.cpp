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

    for(int cases = 1; cases <= test; cases++)
    {
        cout << "Case " << cases << ": ";

        ll m, n;

        cin >> n >> m;

        ll a = n * m;

        if(n == 1 || m == 1)
            cout << max(n, m) << "\n";
        
        else if(n == 2 || m == 2)
        {
            if(n == 2)
                swap(n, m);
            
            a = ((n / 4) * 4);

            a += ((n % 4) == 3) ? 4 : (n % 4) * 2;

            cout << a << "\n";
        }
        
        else if(n == 2 && m == 2)
            cout << 4 << "\n";

        else
            cout << ceil(a / 2.0) << "\n";

    }

    return 0;
}
