class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> v(n);
        // for(int i=0;i<n/2;i++){
        //     v1.push_back(nums[i]);
        // }
        // for(int i=n/2;i<n;i++){
        //     v2.push_back(nums[i]);
        // }
        int i=0;
        int j=n;
        for(int k=0;k<n;k++){
            v.push_back(nums[i]);
            v.push_back(nums[j]);
            i++;
            j++;
        }
     vector<int> answer;
     int need=v.size()-2*n;
     cout<<need<<endl;
     for(int i=0;i<need;i++){
        //  answer.push_back(v[i]);
        auto itr=v.begin();
        v.erase(itr);
     }
    return v;
    }
};
Console
