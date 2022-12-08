#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;

int main()
{ int n;
    
    cout<<"enter the number of values"<<endl;
 cin>>n;
    int arr[n]={3,1,4,2};
    char arr1[n]={'c','z','o','l'};
    pair<int,char> pa[n];
    for(int i=0;i<n;i++){
        pa[i]={arr[i],arr1[i]};
    }
    
    sort(pa,pa+n);
    for(int i=0;i<n;i++){
        cout<<pa[i].second<<endl;
    }
}
