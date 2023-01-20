#include<bits/stdc++.h>
using namespace std;
int main(){
    int *arr1,*arr2,n,m;
    cout<<"enter the size of arr1 -n"<<endl;
    cin>>n;
    arr1=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    cout<<"enter the size of arr2 -m"<<endl;
    cin>>m;
    arr2=new int[m];
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
//   cout<<"........"<<endl;
  int maxx=max(n,m);
//   cout<<maxx<<endl;
   int p,ans;
//    if(maxx==n){
//   ans=1;
//    }else{
//     ans=0;
//    }
   int q;
    // 
    int i=0,j=0;
    int last,lastt;
cout<<"the order after merging is"<<endl;
    for( int k=0;k<n+m;k++){
        
        if(arr1[i]<=arr2[j]){
            // cout<<arr1[i]<<" ";
            // i++;
            if(i>n-1){
                while(j<m){
                    cout<<arr2[j]<<" ";
                    j++;
                }
                break;
            }
            cout<<arr1[i]<<" ";
            i++;
        }else{
           
            if(j>m-1){
                while(i<n){
                    cout<<arr1[i]<<" ";
                    i++;
                }
                break;
            }
             cout<<arr2[j]<<" ";
            j++;
            lastt=arr2[j];
            
        }
        
    
    }
    cout<<endl;
    auto itr=&last;
    // cout<<lastt<<endl;
    // cout<<"........"<<endl;
    int req=max(i,j);
    // cout<<req<<endl;
    

        return 0;
}