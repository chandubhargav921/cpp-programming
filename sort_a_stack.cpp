#include <bits/stdc++.h>

using namespace std;

int main()
{ stack<int> s;
int N,X;
cout<<"enter the size of stack"<<endl;
cin>>N;
// vector<int> v1={6203 ,4626 ,5470 ,2039 ,5917 ,3406 ,5534 ,7005 ,2470 ,9854 ,4993 ,362 ,9820 ,3295 ,7196 ,4037 ,9405 ,8768 ,5405 ,1712 ,3215 ,3101 ,3752 ,2140 ,5438 ,4994 ,1760 ,9573 ,6271 ,3790 ,9624 ,2473 ,9494 ,6171 ,5590 ,5409 ,9577 ,2201 ,2412 ,3124 ,2053 ,8483 ,3485 ,2950 ,2856 ,1759 ,6986 ,3338 ,525 ,3469 ,5049 ,4819 ,6569 ,8801 ,6958 ,3084 ,4872 ,8717 ,3734 ,1141 ,2505 ,3357 ,3613 ,3077 ,605 ,280 ,8485 ,1259 ,2480 ,1975 ,5462 ,5611 ,456 ,8946 ,8561 ,4390 ,1782 ,6624 ,7728 ,3386 ,1170 ,2775 ,8204 ,7738};
for(int i=0;i<N;i++){
    cin>>X;
    s.push(X);
}
// s.push(11);
//     s.push(2);
//     s.push(32);
//     s.push(3);
//      s.push(41);
int sn=s.size();
     vector<int> v;
   for(int i=1;i<=sn;i++){
       v.push_back(s.top());
       s.pop();
       
   }
   int n=v.size();
    int x=0;
  while(x<n/2){
   for(int i=0;i<n-1;i++){
    //   cout<<v[i]<<endl;
       if(v[i]>v[i+1]){
           swap(v[i],v[i+1]);
       }
   }
  x++;
  }
   for(int i=0;i<v.size();i++){
       s.push(v[i]);
   }
  while(s.empty()!=true){
      cout<<s.top()<<" ";
      s.pop();
  }
    return 0;
}
