#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int test, t = 1;

    cin >> test;

    while(test--)
    {
        
        int a, b;
        
        cin >> a >> b;
        
        cout << "Case " << t << ": " <<  a + b << "\n";
            
        t++;
    }

    return 0;
}
