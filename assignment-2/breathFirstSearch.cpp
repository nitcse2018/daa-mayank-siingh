#include <bits/stdc++.h> ​
#define pb push_back ​
​
using namespace std; ​
vector<bool> v; ​
vector<vector<int> > g; ​
int to_search;​
bool found = false;​
void edge(int a, int b) { ​
    g[a].pb(b); ​
} ​
void bfs(int u) { ​
    queue<int> q; ​
    q.push(u); ​
    v[u] = true; ​
​
    while (!q.empty()) { ​
        int f = q.front(); ​
        q.pop(); ​
        cout << f << " "; ​
        // Enqueue all adjacent of f and mark them visited ​
        for (auto i = g[f].begin(); i != g[f].end(); i++) { ​
            if(f == to_search) {​
                 found = true;​
                  Break;
                       }​
                 if (!v[*i]) { ​
                q.push(*i); ​
                v[*i] = true; ​
            }         }     } } ​
int main() ​
{ ​
    int n, e; ​
    cin >> n >> e; ​
    v.assign(n, false); ​
    g.assign(n, vector<int>()); ​
    int a, b; ​
    for (int i = 0; i < e; i++) { ​
        cin >> a >> b; ​
        edge(a, b); ​
    } ​
    to_search = 4;​
    for (int i = 0; i < n; i++) { ​
        if (!v[i] && found == false) ​
            bfs(i); ​
    } ​
    return 0; ​
} 
