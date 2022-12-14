#include <iostream>
#include <vector>

using namespace std;

int main()
{vector<int> v;
int *arr;
int count=0;
    cout<<"enter the number of elements"<<endl;
    int n;
    int i;
    cin>>n;
    int grt;
    // cout<<"hello";
    // int i=0;
    arr=new int(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        v.push_back(arr[i]);
        
        
    }
    // cout<<"hello"<<endl;
    // cout<<v.front()<<endl;
    for(auto itr=v.begin();itr<=(--v.end());itr++){
        int k=*(itr);
        //  itr=v[k];
        count=0;
        grt=0;
        for(auto itrr=v.begin();itrr<itr;itrr++){
            while(*(itrr)>*(itr)){
              
                grt=*(itrr);
                itrr++;
                
            }
            
            
        }
        if(grt!=0){
         cout<<grt<<endl;
        }else{
            cout<<"-1"<<endl;
        }
    }
}
