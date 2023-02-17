class Solution {
//   public:
// //   int sum=0;
// //         // int n=GeekNum.size();
// //   int res(int n,vector<long long> GeekNum,int k){
// //             for(int i=n-k;i<n;i++){
// //                 sum+=GeekNum[i];
// //             }
// //             return sum;
// // //         }
//     long long solve(int N, int K, vector<long long> GeekNum) {
//         // code here
//         long long sum=0;
//         int n=GeekNum.size();
//         //  for(int i=n-K;i<n;i++){
//         //         sum+=GeekNum[i];
//         //     }
//         //     cout<<sum<<endl;
        
//         for(int i=n;i<N;i++){
//         //     long long sum=0;
//         // int n=GeekNum.size();
//         //  for(int i=n-K;i<n;i++){
//         //         sum+=GeekNum[i];
            
//         //     cout<<sum<<endl;
//             GeekNum[n]=res(n,GeekNum,K);
//         //  }
//         }
//      return GeekNum[N-1];
//     }
//     int res(int n,vector<long long> GeekNum,int k){
//         long long summ=0;
//             for(int i=n-k;i<n;i++){
//                 summ+=GeekNum[i];
//             }
//             return summ;
//         }
  public:

    long long solve(int N, int k, vector<long long> G) {

       long long i=0,j=0,cnt=0,sum=0;

        while(i<N){

            cnt++;

            sum+=G[i];

            if(i-j+1==k){

              G.push_back(sum);

               sum-=G[j];

               j++;

            } 

            i++;

        }

        return G[N-1];

    }
};