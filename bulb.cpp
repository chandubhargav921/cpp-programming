#include<bits/stdc++.h>
using namespace std;
    int bulbSwitch(int n) {
        int k,l,j;
      vector<int> bulbStatus(n);
      if(n==1||n==0){
          return n;
      }
      for(int i=1;i<=n;i++){
          if(i==1){
             for(int j=0;j<n;j++){
          bulbStatus[j]=1;
      } 
          }
          if(i==2){
              for(int k=0;k<n;k=+2){
                  bulbStatus[k]=0;
              }
          }
          if(i==3){
              for(int l=0;l<n;l+=3){
                  if(bulbStatus[l]==0){
          bulbStatus[l]=1;
                  }else{
                      bulbStatus[l]=0;
                  }
              }
          }
          if(i>3&&i<n){
              for(int m=0;m<n;m+=i){
                  if(bulbStatus[m]==0){
          bulbStatus[m]=1;
                  }else{
                      bulbStatus[m]=0;
                  }
              }
          }
          if(i==n){
              if(bulbStatus[n]==0){
          bulbStatus[n]=1;
                  }else{
                      bulbStatus[n]=0;
                  }
          }
      }
      int ans=0;
      for(int i=0;i<n;i++){
          if(bulbStatus[i]==1){
              ans++;
          }
      }
      return ans;
    
};
int main(){
    int n=3;
    cout<<bulbSwitch(3)<<endl;
}