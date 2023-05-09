#include <bits/stdc++.h>

using namespace std;
// int n=5;
  vector<int> memo{-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
  int m=memo.size();
//   void init(){
//   for(int i=0;i<n+1;i++){
//       memo[i]=-1;
//   }
//   }
int fib(int n){
    if(n<=1){
        return n;
    }else{
        return fib(n-1)+fib(n-2);
    }
}
int fibm(int n) {

        if(memo[n]==-1){
            int res;
        // if(n==1||n==0){
        //     res= n;
        // }else{
        //      res=fib(n-2)+fib(n-1);
        //     memo[n]=res;
        //     // return res;
        
        // }
        res=fib(n);
        memo[n]=res;
        }
        return memo[n];
    }

int main()
{
    // init();
   cout<<fibm(12);

    return 0;
}