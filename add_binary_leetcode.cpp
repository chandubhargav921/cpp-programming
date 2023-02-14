// class Solution {
// public:
//     string addBinary(string a, string b) {
//     //  double num1=0,num2=0;
//     //  string cur,cur1;
//     // //  for(int i=a.size()-1;i>=0;i++){
//     // //       cur = a[i];
//     // //    num1+=stoi(cur)*(pow(2,a.size()-i-1));
//     // //  }
//     // for(int i=0;i<a.size();i++){
//     //      cur =a[i];
//     // //    num2+=stoi(cur1)*(pow(2,b.size()-i-1));
//     // if(cur=="1"){
//     //     num1+=pow(2,a.size()-i-1);
//     // }

//     //  }
//     //   for(int i=0;i<b.size();i++){
//     //      cur1 =b[i];
//     // //    num2+=stoi(cur1)*(pow(2,b.size()-i-1));
//     // if(cur1=="1"){
//     //     num2+=pow(2,b.size()-i-1);
//     // }
    
//     //  }
//     // //  for(int i=b.size()-1;i>=0;i++){
//     // //      cur1 =b[i];
//     // //    num2+=stoi(cur1)*(pow(2,b.size()-i-1));
//     // //  }
//     //  return to_string(num1+num2);
//     int num1=stoi(a);
//     int num2 = stoi(b);
//     int size1=a.size(),size2=b.size();
//     int msize=max(size1,size2);
//     char carry;
//     string result;
//     for(int i=0;i<msize;i++){
//         if(a[i]=='1'&&b[i]=='1'){
//              carry='1';
//           result+="0";
//         }
//         if(a[i]=='0'&&b[i]=='0'){
//           carry='0';
//           result+="0";
//         }
//         if((a[i]=='1'&&b[i]=='0')||(a[i]=='1'&&b[i]=='0')){
//             if(carry!='1'){
//             result+="1";
//             }
//             if(carry=='1'){
//                 result+="0";
//             }
//         }
//     }
//  reverse(result.begin(),result.end());
//  return result;
//     }
// };
class Solution {
 public:
  string addBinary(string a, string b) {
    string ans;
    int carry = 0;
    int i = a.length() - 1;
    int j = b.length() - 1;

    while (i >= 0 || j >= 0 || carry) {
      if (i >= 0)
        carry += a[i--] - '0';
      if (j >= 0)
        carry += b[j--] - '0';
      ans += carry % 2 + '0';
      carry /= 2;
    }

    reverse(begin(ans), end(ans));
    return ans;
  }
};