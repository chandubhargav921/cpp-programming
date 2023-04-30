#include <bits/stdc++.h>

using namespace std;
void solution(vector<int> prices,int no_of_books,int max_books){
    vector<float> sum;
    for(int i=0;i<no_of_books-max_books+1;i++){
        float temp_sum=0;
        // int j=i;
        // while(j<max_books){
        // temp_sum+=prices[i+j];
        // j++;
        for(int j=i;j<i+max_books;j++){
            temp_sum+=prices[j];
        }
        sum.push_back(temp_sum/max_books);
      
      
    }
    // float minn=1000;
    // for(int i=0;i<no_of_books;i++){
    //     if(sum[i]<minn){
    //         minn=sum[i];
    //     }
    // }
    vector<float> summ=sum;
    sort(summ.begin(),summ.end());
    float minn=summ[0];
    auto itr=find(sum.begin(),sum.end(),minn);
    // cout<<sum.end()-itr<<endl;
    int index1=sum.end()-itr+max_books;
    cout<<index1<<endl;
    // auto itr=prices.end();
    cout<<index1+max_books-1<<endl;
    cout<<minn<<endl;
    for(auto x:sum){
        cout<<x<<" ";
    }
    
    // return minn;
    
}
int solutionn(vector<int> prices,int no_of_books,int max_books,int ans){
    vector<float> sum;
    for(int i=0;i<no_of_books-max_books+1;i++){
        float temp_sum=0;
        // int j=i;
        // while(j<max_books){
        // temp_sum+=prices[i+j];
        // j++;
        for(int j=i;j<i+max_books;j++){
            temp_sum+=prices[j];
        }
        float avg = temp_sum/max_books;
        if(avg==ans){
            return i;
        }
      
      
    }
    return 0;
}
int main()
{vector<int> prices{30,11,43,32,8,15};
vector<int> price{90,20};
// solution(price,2,2);
// cout<<solutionn(prices,6,3,solution(prices,6,3));
solution(prices,6,3);

    return 0;
}
