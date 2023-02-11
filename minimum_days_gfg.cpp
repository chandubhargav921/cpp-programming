class Solution {
  public:
    int getMinimumDays(int N,string S, vector<int> &P) {
        
        int count = 0;
        for(int i=0; i<N-1; ){
            if(S[i] == S[i+1] && S[i] != '?')
            {
                S[P[count++]] = '?';
            }
            else
            i++;
            
            //cout<<S<<"\n";
        }
        
        return count;
    }
};