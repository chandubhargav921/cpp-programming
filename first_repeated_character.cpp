// string ansle(string s,vector<int>count){
//     string ans="";
//     for(int i=0;i<s.size();i++){
//         cout<<count[i]<<" ";
//         // cout<<count[i]<<endl;
//         if(count[i]!=1){
//             ans+=s[i];
//             return ans;
//         }
// }
// }
string firstRepChar(string s)
{
    //code here.
    // vector<int> count(s.size());
    // for(int i=0;i<s.size();i++){
    //     for(int j=i;j<s.size();j++){
    //         if(s[j]==s[i]){
    //             count[i]++;
    //             ansle(s,count);
    //         }
    //     }
    // }
    // cout<<count.size()<<endl;
    // string ans="";
    // for(int i=0;i<s.size();i++){
    //     cout<<count[i]<<" ";
    //     // cout<<count[i]<<endl;
    //     if(count[i]!=1){
    //         ans+=s[i];
    //         return ans;
    //     }
    // }
    set<char>answer;
    answer.insert(s[0]);
    string ans="";
    for(int i=1;i<s.size();i++){
        int curr=answer.size();
        answer.insert(s[i]);
        if(curr==answer.size()){
            ans+=s[i];
            return ans;
        }
    }
    string defau="-1";
    return defau;