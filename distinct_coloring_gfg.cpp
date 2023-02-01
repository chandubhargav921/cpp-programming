public:
    long long int fn(int ind, int last, int &N, vector<long long>&r, vector<long long>&g, vector<long long>&b, vector<vector<long long int>> &dp){
        if(ind == -1)return 0;
        
        if(dp[ind][last] != -1)return dp[ind][last];
        long long int red = 1e11, green = 1e11, blue = 1e11;
        
        if(last == 0){
            red =  r[ind] + fn(ind-1, 1, N, r, g, b, dp);
            green = g[ind] + fn(ind-1, 2, N, r, g, b, dp);
            blue  = b[ind] + fn(ind-1, 3, N, r, g, b, dp);
            return dp[ind][last] =  min(red, min(green, blue));
        }
        else if(last == 1){
            green = g[ind] + fn(ind-1, 2, N, r, g, b, dp);
            blue  = b[ind] + fn(ind-1, 3, N, r, g, b, dp);
            return dp[ind][last] = min(green, blue);
        }
        else if(last == 2){
            red = r[ind] + fn(ind-1, 1, N, r, g, b, dp);
            blue = b[ind] + fn(ind-1, 3, N, r, g, b, dp);
           return dp[ind][last] = min(red, blue);
        }
        else if(last == 3){
            red = r[ind] + fn(ind-1, 1, N, r, g, b, dp);
            green  = g[ind] + fn(ind-1, 2, N, r, g, b, dp);
            return dp[ind][last] = min(green, red);
        }
        
    }
    long long int distinctColoring(int N, int r[], int g[], int b[]){
       vector<vector<long long int>> dp(N, vector<long long int>(4,-1));
       vector<long long>red(r, r+N);
       vector<long long> green(g, g+N);
       vector<long long> blue(b, b+N);
       long long ans = fn(N-1,0,N,red,green,blue, dp);
       return ans;
    }