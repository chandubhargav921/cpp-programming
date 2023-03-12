class Solution {
public:
    vector<int> findMaxRow(vector<vector<int>> mat, int N) {
        //code here
        vector<int> count(N);
        for(int j=0;j<N;j++){
            for(int i=0;i<N;i++){
                if(mat[j][i]==1){
                    count[j]++;
                }
            }
        }
        int maxx=0;
        int index=0;
       for(int i=0;i<count.size();i++){
           if(count[i]>maxx){
               maxx=count[i];
               index=i;
           }
       }
       vector<int> ans;
       ans.push_back(index);
       ans.push_back(maxx);
       vector<int> res;
    //   ans.pop_front();
       return ans;
    }
};