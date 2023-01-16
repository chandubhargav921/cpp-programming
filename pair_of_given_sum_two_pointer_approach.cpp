#include <bits/stdc++.h>
using namespace std;

int main()
{
    // cout<<"Hello World";
    int arr[4]={3,8,13,18};
    int n=sizeof(arr)/sizeof(int);
    vector<int> v(arr,arr+n);
    sort(v.begin(),v.end());
    int sum;
    cout<<"enter the sum to check"<<endl;
    cin>>sum;
    auto itr=v.begin();
    auto itrr=v.end()-1;
    // for(auto itr=v.begin();itr!=v.end();itr++){
    //     for(itrr=v.begin();itrr!=v.end();itrr++){
    //         if(*itr+*itrr==sum){
    //             cout<<*itr<<" and "<<*itrr<<endl;
                
    //         }else{
    //             cout<<"not found"<<endl;
    //         }
    //     }
    while(itr!=itrr){
        if(*itr+*itrr>sum){
            itrr--;
        }else if(*itr+*itrr<sum){
            itr++;
        }else if(*itr+*itrr==sum){
            cout<<*itr<<" "<<*itrr;
            break ;
        }else{
            cout<<"not found"<<endl;
            break;
        }
        // cout<<"not found"<<endl;
    }
        
        
    
    
    

    return 0;
}
