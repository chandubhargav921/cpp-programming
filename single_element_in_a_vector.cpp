class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        // set<int> s,s1(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i=i+2){
            if(i==nums.size()-2||i==nums.size()-1){
                return *(nums.end()-1);
            }
            if(nums[i]!=nums[i+1]){
                return nums[i];
            }
            // s.insert(nums[i]);
        }


    return -1;
    }
};