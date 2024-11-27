class Solution {
public:


vector<int> shortestPath(int n, vector<vector<int>>& queries) {
    
    unordered_map<int, vector<int>> graph;
    for (int i = 0; i < n - 1; ++i) {
        graph[i].push_back(i + 1);
    }

    
    auto dijkstra = [&]() {
        vector<int> dist(n, numeric_limits<int>::max());
        dist[0] = 0;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        pq.push({0, 0});

        while (!pq.empty()) {
            auto [current_dist, u] = pq.top();
            pq.pop();

            if (current_dist > dist[u]) {
                continue;
            }

            for (int v : graph[u]) {
                if (dist[u] + 1 < dist[v]) {
                    dist[v] = dist[u] + 1;
                    pq.push({dist[v], v});
                }
            }
        }

        return dist[n - 1];
    };

    vector<int> answer;
    for (const auto& query : queries) {
        int u = query[0];
        int v = query[1];
        graph[u].push_back(v);
        int shortest_path_length = dijkstra();
        answer.push_back(shortest_path_length == numeric_limits<int>::max() ? -1 : shortest_path_length);
    }

    return answer;
}

    vector<int> shortestDistanceAfterQueries(int n, vector<vector<int>>& queries) {
         
        vector<int> result = shortestPath(n, queries);
        return result;
    }
};