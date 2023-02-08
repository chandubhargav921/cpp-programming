class Solution{
   public:
  vector<long long int> countZero(int n, int k, vector<vector<int>>& arr){
      //Code Here
      int row = n-1;
      int col = n-1;
      vector<long long int > ans;
      bool visRow[n+1]= {0};
      bool visCol[n+1] = {0};
      visRow[arr[0][0]] = 1;
      visCol[arr[0][1]] = 1;
      ans.push_back(row * col);
      for(int i = 1; i < k; i++)
      {
        if(!visRow[arr[i][0]])
        {
            row--;
            visRow[arr[i][0]] = 1;
        }
        if(!visCol[arr[i][1]])
        {
            col--;
            visCol[arr[i][1]] = 1;
        }
        ans.push_back(row*col);
            
      }
      return ans;
  }
};