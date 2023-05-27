#include <iostream>

using namespace std;

int ress(int coins[],int n,int sum){
    if(sum==0){
        return 1;
    }
    if(n==0){
        return 0;
    }
    int res=ress(coins,n-1,sum);
    if(coins[n-1]<=sum){
        res=res+ress(coins,n,sum-coins[n-1]);
    }
    return res;
}

int main()
{ int coins[]={2,5,3,6};
cout<<ress(coins,4,10);
    // cout<<"Hello World";

    return 0;
}
