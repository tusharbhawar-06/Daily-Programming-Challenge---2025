#include <iostream>
#include <vector>
using namespace std;

bool dfs(int node, int parent, vector<int> adj[], vector<bool> &vis) {
    vis[node] = true;
    for (int neigh : adj[node]) {
        if (!vis[neigh]) {
            if (dfs(neigh, node, adj, vis)) return true;
        } 
        else if (neigh != parent) {
            return true
        }
    }
    return false;
}

bool hasCycle(int V, vector<int> adj[]) {
    vector<bool> vis(V, false);
    for (int i = 0; i < V; i++) {
        if (!vis[i] && dfs(i, -1, adj, vis))
            return true;
    }
    return false;
}

int main() {
    int V = 5;
    vector<int> adj[5];

    // edges
    adj[0].push_back(1); adj[1].push_back(0);
    adj[1].push_back(2); adj[2].push_back(1);
    adj[2].push_back(3); adj[3].push_back(2);
    adj[3].push_back(4); adj[4].push_back(3);
    adj[4].push_back(0); adj[0].push_back(4);

    if (hasCycle(V, adj)) cout << "true";
    else cout << "false";
}
