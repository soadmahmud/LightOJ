#include <bits/stdc++.h>
using namespace std;

#define ll long long

int flag = 0;

string s[20];

int w, h;

vector<pair<int, int>> direction = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

int vis[20][20];

void dfs(int i, int j)
{
    flag++;

    vis[i][j] = 1;

    for(auto d : direction)
    {
        int x = i + d.first;

        int y = j + d.second;

        if(x >= 0 && y >= 0 && x < h && y < w && !vis[x][y] && s[x][y] == '.')
            dfs(x, y);
    }


}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int test, t = 1;

    cin >> test;

    while(test--)
    {
        flag = 0;

        cin >> w >> h;

        for(int i = 0; i < h; i++)
            for(int j = 0; j < w; j++)
                vis[i][j] = 0;
        
        for(int i = 0; i < h; i++)
            cin >> s[i];
        
        for(int i = 0; i < h; i++)
        {
            for(int j = 0; j < w; j++)
            {
                if(s[i][j] == '@')
                {
                    dfs(i, j);

                    break;
                }
            }
        
        }

        cout << "Case " << t << ": " << flag << "\n";

        t++;
    }

    return 0;
}
