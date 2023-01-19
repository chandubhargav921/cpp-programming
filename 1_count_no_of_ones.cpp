#include<iostream>
#include <vector>
using namespace std;
int count(int arr[],int n){
    int countt=0;
    vector<int> v(arr,arr+n);
    auto itr=v.end();
    for(auto itrr=v.begin();itrr<itr;itrr++){
        if(*(itrr)==1){
            countt++;
        }
    }
    return countt;
} 
int main(){
   int arr[7]={1,1,1,1,1};
   cout<<count(arr,7)<<endl;
    return 0;
}
