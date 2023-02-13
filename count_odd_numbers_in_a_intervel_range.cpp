class Solution {
public:
    int countOdds(int l, int h) {
        // return ((h + 1) / 2) - (l / 2);
        if((l%2==1)&&(h%2==1)){
            return (h-l)/2+1;
        }
        if((l%2==1)&&(h%2==0)){
            return (h-l)/2+1;
        }
        if((l%2==0)&&(h%2==0)){
            return (h-l)/2;
        }
         if((l%2==0)&&(h%2==1)){
            return (h-l)/2+1;
        }
    return 0;
    }
};