class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=0;
        map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        int j=0;
        for(auto it:mp){
           nums[j]=it.first;
           j++;
        }
        return j;
       

        
    }
};
