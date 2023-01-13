#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int answer(vector<int> v){
     for(int k=0;k<v.size();k++){
        if(v[k]!=1){
            return k;
        }else{
            continue;
        }
    }
    return 0;
}
int main()
{int k=0,now=0;
    int arr[6]={0,2,1,3,2,2};
    int n=sizeof(arr)/sizeof(1);
    vector<int> v1(arr,arr+n);
    sort(v1.begin(),v1.end());
    vector<int> v2(v1.back());
        for(auto j=v1.begin();j!=v1.end();j++){
            v2[*j]++;
        }
    
    // while(v2[k]!=1){
    //     k++;
    //     now++;
        
    // }
    // for(int k=0;k<v2.size();k++){
    //     if(v2[k]!=1){
    //         return k;
    //     }
    // }
    for(auto x:v2){
        cout<<x<<" ";
    }
    cout<<v2[0]<<endl;
    cout<<answer(v2)<<endl;
    return 0;
}
