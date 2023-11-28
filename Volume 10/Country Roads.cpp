#include <bits/stdc++.h>
using namespace std;

#define ll long long

int inf = 1e8, n, r;

void dijkstra(vector<pair<int, int>> road[], vector<int> &distance, int t)
{
    vector<bool> vis(n, false);

    distance[t] = 0;

    set<pair<int, int>> s;

    s.insert({0, t});

    while(!s.empty())
    { 
        auto node = *s.begin();

        int w = node.first;

        t = node.second;

        s.erase(s.begin());

        if(vis[t])
            continue;

        vis[t] = true;

        for(auto i : road[t])
        {

            int a = i.first, b = max(i.second, w);

            if(vis[a])
                continue;

            if(b < distance[a])
            {
                distance[a] = b;

                s.insert({b, a});
            }
        }

    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int test;

    cin >> test;

    for(int t = 1; t <= test; t++)
    {
        cout << "Case " << t << ":\n";

        cin >> n >> r;

        vector <pair<int, int>> road[n];

        for(int i = 0; i < r; i++)
        {
            ll a, b, c;

            cin >> a >> b >> c;

            road[a].push_back({b, c});

            road[b].push_back({a, c});
        }

        vector <int> distance(n, inf);

        int home;

        cin >> home;

        dijkstra(road, distance, home);

        for(int i = 0; i < n; i++)
        {
            if(distance[i] >= inf)
                cout << "Impossible\n";
            
            else
                cout << distance[i] << "\n";
        }
    }

    return 0;
}
