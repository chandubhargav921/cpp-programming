#include <bits/stdc++.h>
using namespace std;

int main()
{
    // cout<<"Hello World";
    int arr[3]={8,4,6};
    int n=sizeof(arr)/sizeof(int);
    vector<int> v(arr,arr+n);
    sort(v.begin(),v.end());
    int sum;
    cout<<"enter the sum to check"<<endl;
    cin>>sum;
    auto itrr=v.begin();
    for(auto itr=v.begin();itr!=v.end();itr++){
        for(itrr=v.begin();itrr!=v.end();itrr++){
            if(*itr+*itrr==sum){
                cout<<*itr<<" and "<<*itrr<<endl;
                
            }else{
                cout<<"not found"<<endl;
            }
        }
        
        
    }
    
    

    return 0;
}
