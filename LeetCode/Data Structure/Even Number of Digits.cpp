class Solution {
public:
    int findNumbers(vector<int>& nums) {
        
        int ans=0;
        
        for(int i=0;i<nums.size();i++){
            int x=log10(nums[i]);
            x++;
            if(x%2==0)
                ans++;
        }
        return ans;
    }
};
