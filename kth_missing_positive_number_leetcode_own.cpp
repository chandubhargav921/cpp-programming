class Solution {
public:
 int maxx(vector<int> arr){
     int maximum=0;
     for(int i=0;i<arr.size();i++){
         if(maximum<arr[i]){
             maximum=arr[i];
         }
     }
     return maximum;
 }
    int findKthPositive(vector<int>& arr, int k) {
        int upto=maxx(arr);
        cout<<upto<<endl;
        vector<int> v(upto);
        for(int i=1;i<=upto;i++){
            v[i-1]=i;
        }
        vector<int> ans;
        for(auto x:v){
            cout<<x<<" ";
        }
        // for(int i=0;i<upto;i++){
        //    auto itr= find(v.begin(),v.end(),arr[i]);
        //     if(itr!=v.end()){
        //         // ans.push_back(arr[i]);
        //         v.erase(itr);
        //     }
        // }
        // int i=0;
        // while(arr.empty()==false){
        //  auto itr= find(v.begin(),v.end(),arr[i]);
        //   v.erase(itr);
        //   auto itrr=find(arr.begin(),arr.end(),arr[i]);
        //   arr.erase(itrr);
        //   i++;
        // }
        stack<int> st;
        for(int i=0;i<arr.size();i++){
            st.push(arr[i]);
        }
        int i=0;
        while(st.empty()==false){
             auto itr= find(v.begin(),v.end(),arr[i]);
          v.erase(itr);
          i++;
          st.pop();
        }
        // return ans[k-1];
        sort(v.begin(),v.end());
        if(k>v.size()){
            int j=1;
            while(k!=v.size()){
            v.push_back(maxx(arr)+j);
            j++;
            }
        }
        return v[k-1];
    }
};