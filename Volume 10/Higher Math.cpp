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
    
    int t = 1;

    while(test--)
    {
        ll a, b, c;
        
        cin >> a >> b >> c;
        
        ll mx = max(a, max(b, c));
        
        ll sum = (a * a) + (b * b) + (c * c) - (mx * mx) - (mx * mx);
        
        cout << "Case " << t << ": " <<  (sum ? "no" : "yes")<< "\n";
                                          
            
        t++;
    }

    return 0;
}
