#include <iostream>
#include <vector>

using namespace std;
void binarysearch(int x,int arr[],int n){
    vector<int> v(arr,arr+n);
    int median;
   if(v.size()%2==0){
       v.push_back(0); 
       
   }
   auto its=v.begin(); 
   auto ite=v.end()-1;
   while(median!=*(v.find(x))){
    median=((*its)+(*ite))/2;  
   if(x>median){
       its=&median;
       
   }else if(x<median){
       ite=&median;
   }
   }
   return median;
}
int main()
{
   int arr[5]={1,2,3,4,5}; 
   int n=5;
   binarysearch(2,arr,5);
   return 0;
}
