class Solution{   
public:
    int minCost(vector<vector<int>> &colors, int N) {
        vector<int>pre(4,0);
        for(int i=1;i<=N;i++){
            vector<int>curr(4,0);
            for(int prev=0;prev<=3;prev++){
                int one=1e9,two=1e9,three=1e9;
                if(prev!=0)one=colors[i-1][0]+pre[0];
                if(prev!=1)two=colors[i-1][1]+pre[1];
                if(prev!=2)three=colors[i-1][2]+pre[2];
                curr[prev]=min(one,min(two,three));
            }
            pre=curr;
        }
        return pre[3];
    }
};