class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans = -1, n = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n; i++) {
            int index = i;
            while (index < n && nums[index] == nums[i])
                index++;
            if (index - i > n / 2) {
                ans = nums[i];
                break;
            }
            i = index - 1;
        }
        return ans;
    }
};
