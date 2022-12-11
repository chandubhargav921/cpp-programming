#include <iostream>
#include <vector>

using namespace std;

int main()
{
   int arr[6]={8,100,20,40,3,7},k=10;
   int n=sizeof(arr)/sizeof(1); 
   vector<int> v(arr,arr+n);
   for(int i;i<v.size();i++){
       if(v[i]<k){
           cout<<v[i]<<endl;
       }else{
           
       }
   }
}

