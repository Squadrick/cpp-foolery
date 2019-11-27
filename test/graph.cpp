#include <bits/stdc++.h>

using namespace std;

void addEdge(vector<vector<int> > adj, int u, int v) {
  adj[u].push_back(v);
  adj[v].push_back(u);
}

void DFSUtil(int u, vector<vector<int> > adj, vector<bool> &visited) {
  visited[u] = true;

  cout << u << " ";

  for(auto node: adj[u]) {
    if (!visited[node]) {
      DFSUtil(node, adj, visited);
    }
  }
}

void DFS(vector<vector<int> > adj) {
  vector<bool> visited(adj.size(), false);

  for (int u = 0; u < adj.size(); ++u) {
    if (!visited[u]) {
      DFSUtil(u, adj, visited);
    }
  }
}

void BFS(vector<vector<int> > adj) {
  vector<bool> vsited(adj.size(), false);
  list<int> queue;

  visited[0] = true;
  queue.push_back(0);

  while (!queue.empty()) {
    auto s = queue.front();
    cout << s << endl;
    queue.pop_front();
    cout << "test" << endl;

    for (auto node: adj[s]) {
      cout << node << endl;
      if (!visited[node]) {
        queue.push_back(node);
      }
    }
    cout << "test1" << endl;
  }
}

int main() {
  vector<vector<int> > adj(6);

  addEdge(adj, 0, 1);
  addEdge(adj, 0, 5);
  addEdge(adj, 0, 4);
  addEdge(adj, 1, 2);
  addEdge(adj, 1, 3);
  addEdge(adj, 1, 4);
  addEdge(adj, 2, 3);
  addEdge(adj, 3, 4);

  //DFS(adj);
  BFS(adj);
}
