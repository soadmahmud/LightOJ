#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    cout << fixed << setprecision(2);
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int test;

    cin >> test;
    
    int t = 1;
    
    while(test--)
    {
        double r;
        
        cin >> r;
        
        cout << "Case " << t << ": " << ((r*2) * (r*2)) - (1.0 * (2 * acos(0.0)) * (r) * (r)) << "\n";
        
        t++;
    }

    return 0;
}
