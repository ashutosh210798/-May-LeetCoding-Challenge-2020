class Solution {
public:
    bool possibleBipartition(int N, vector<vector<int>>& dislikes) {
        int i,m = dislikes.size();
        vector<vector<int>> adj(N+1);
        for(i=0;i<m;i++)
        {
            adj[dislikes[i][0]].push_back(dislikes[i][1]);
            adj[dislikes[i][1]].push_back(dislikes[i][0]);
        } 
        vector<int> side(N+1, -1);
        bool is_bipartite = true;
        queue<int> q;
        for (int st = 0; st < N; ++st) 
        {
            if (side[st] == -1) 
            {
                q.push(st);
                side[st] = 0;
                while (!q.empty()) 
                {
                    int v = q.front();
                    q.pop();
                    for (int u : adj[v]) 
                    {
                        if (side[u] == -1) 
                        {
                            side[u] = side[v]^1;
                            q.push(u);
                        } 
                        else 
                            is_bipartite &= side[u] != side[v];
                    }
                }
            }
        }
        return is_bipartite;
    }
};
