class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int maxcur = nums[0];
        int maxsum = nums[0];

        for(int i = 1; i < nums.size(); i++)
        {
            maxcur = max(nums[i], maxcur + nums[i]);

            if(maxcur > maxsum)
            {
                maxsum = maxcur;
            }
        }

        return maxsum;
    }
};
