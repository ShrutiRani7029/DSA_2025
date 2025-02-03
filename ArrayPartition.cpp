class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int n=nums.size();
        ///gredy////
        int sum=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;){
            sum+=nums[i];
            i=i+2;
        }
        return sum;

    }
};

