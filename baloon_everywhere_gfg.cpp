class Solution{
public:
    int maxInstance(string s){
        string str="balloon";
        unordered_map<char,int>m,m1;
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }
        int count=0;
           for(int i=0;i<str.size();i++)
        {
            m1[str[i]]++;
        }
       int ans=INT_MAX;
       for(auto i : m1)
       {
           count=m[i.first]/i.second;
           ans=min(ans,count);
       }
       
        return ans;
    }
};