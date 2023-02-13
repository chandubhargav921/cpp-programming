class Solution{
// public:
//     int inSequence(int A, int B, int C){
//         // code here
//     //     while(A<=B||A>=B){
            
//     //         if(A==B){
//     //             return 1;
//     //         }
//     //         A=A+C;
//     //     }
//     //     return 0;
//     // }
//     double result =(B-A)/C+1);
//     if(((B-A)/C+1)%2==0||((B-A)/C+1)%2==1){
//         return 1;
//     }
//  return 0;
// }
public:
    int inSequence(int A, int B, int C){
        // code here
        int dist = B - A;
        if(!dist) return 1;
        if(!C) return 0;
        return dist%C == 0 and dist/C> 0;
    }

};