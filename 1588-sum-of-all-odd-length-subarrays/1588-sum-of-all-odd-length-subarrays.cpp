class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int ans = 0;

        for(int i=1;i<=arr.size();i+=2){
            int windowSum=0;

            for(int j=0;j<i;j++){
                windowSum+=arr[j];
            }

             ans += windowSum;

           for(int k=i;k<arr.size();k++){
            windowSum+=arr[k];
            windowSum-=arr[k-i];
            ans+=windowSum;
           }


        }

        return ans;
    }
};