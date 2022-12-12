#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{int arr[]={101,108,103,105},arr1[]={70,80,40,90};
int n=sizeof(arr)/sizeof(1);
    pair<int,int> pa[n];
    for(int i=0;i<n;i++){
        pa[i]={arr1[i],arr[i]};
        
    }
    // cout<<"............"<<endl;
    sort(pa,pa+n);
    for(int j=0;j<n;j++){
        cout<<pa[j].second<<"---"<<pa[j].first<<endl;
    }
    cout<<"............"<<endl;
    for(int i=n-1;i>=0;i--){
    
        cout<<pa[i].second<<"---"<<pa[i].first<<endl;
    }
    
}
