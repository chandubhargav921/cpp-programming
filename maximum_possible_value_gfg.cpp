class Solution {
  public:
    
    long long maxPossibleValue(int N,vector<int> A, vector<int> B) {

        long long ans = 0;

        long long totalSticks = 0;

        

        int mn = INT_MAX;

        

        for(int i = 0;i < N;i++){

            int len = A[i];

            int unit = B[i];

            

            if(unit % 2 != 0) unit--;

            

            if(unit >= 2) mn = min(mn, len);

            

            ans += (len * unit);

            totalSticks += unit;

        }

        

        if(totalSticks % 4 != 0) ans -= (2 * mn);

        

        return ans;

    }

};