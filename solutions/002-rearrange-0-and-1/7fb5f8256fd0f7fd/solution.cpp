class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
        int n = arr.size();
        
        int countZeros = 0;
        int countOnes = 0;
        
        for(int i = 0 ; i< n; i++) {
            if(arr[i]==0) {
                countZeros++;
            }
            
            else{
                countOnes++;
            }
        }
        
        for(int i = 0 ; i<countZeros; i++) {
            arr[i] = 0;
        }
        
        for(int i = countZeros; i<n; i++) {
            arr[i] = 1;
        }
    }
};