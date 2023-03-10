
class Solution {
  public:
    long long maxTripletProduct(long long arr[], int n)
    {
    	// Complete the function
    	sort(arr, arr + n); //sort the array

     long long a = arr[0]*arr[1]*arr[n-1]; // triplet 1

     long long b = arr[n-1]*arr[n-2]*arr[n-3]; // triplet 2

     return max(a,b); //maximum of 1 or 2
    }
};