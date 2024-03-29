class Solution {
    int dfs(int node, vector<vector<int>>& adj, vector<int> &cnt, vector<int> &nodes) {
        cnt[node]++;
        int n = 1;
        nodes.push_back(node);
        for(int ad : adj[node]) {
            if(cnt[ad]) {
                cnt[ad]++;
                continue;
            }
            n += dfs(ad, adj, cnt, nodes);
        }
        return n;
    }
  public:
    int findNumberOfGoodComponent(int n, vector<vector<int>>& adj) {
        vector<int> cnt(n + 1);
        int ans = 0;
        for(int i=1; i<=n; i++) {
            if(cnt[i]) continue;
            vector<int> nodes;
            
            int s = dfs(i, adj, cnt, nodes);
            cnt[i]--;
            int f = 1;
            for(int i : nodes) {
                if(cnt[i] != s - 1) f = 0;
            }
            ans += f;
        }
        return ans;
    }
};