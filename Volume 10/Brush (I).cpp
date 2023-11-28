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
        int s = 0;
        
        int n;
        
        cin >> n;
        
        while(n--)
        {
            int a;
            
            cin >> a;
            
            if(a > 0)
                s += a;
        }
        
        cout << "Case " << t << ": " <<  s << "\n";
            
        t++;
    }

    return 0;
}
