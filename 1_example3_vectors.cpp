#include <iostream>
#include <utility>
#include <algorithm>

using namespace std;

int main()
{int n;
cout<<"enter the number of elements"<<endl;
    cin>>n;
    int arr[n]={20,10,5,40},arr1[n];
    for(int i=0;i<n;i++){
        arr1[i]=i;
    }
    pair<int, int> pa[n];
    
    for(int i=0;i<n;i++){
        pa[i]={arr[i],arr1[i]};
    }
    cout<<"hello"<<endl;
    sort(pa,pa+n);
     for(int i=0;i<n;i++){
         cout<<pa[i].first<<"----"<<pa[i].second<<endl;
     }
}
