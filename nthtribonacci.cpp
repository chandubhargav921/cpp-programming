class Solution {
public:
int sum=0;
vector<int> v2;
  vector<int> summ(){
      vector<int> v;
     v[0]=0;
     v[1]=1;
     v[2]=1;
      
        for(int i=3;i<37;i++){
          v[i]=v[i-1]+v[i-2]+v[i-3];

        }
        return v;
  }
  v2=summ();
    int tribonacci(int n) {
        // // vector<int> v;
        // // for(int i=0;i<37;i++){
          
        // // }
        // //  tribonacci(0)=0,tribonacci(1)=1,tribonacci(2)=1;
        //  if(n==0){
        //      return 0;
        //  }
        //  if(n==1){
        //      return 1;
        //  }
        //  if(n==2){
        //      return 1;
        //  }
        //  tribonacci(n)=tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3);


        //  return tribonacci(n);
        for(int i=0;i<n;i++){
            sum+=v2[i];
        }
        return sum;
        
    
    }
};