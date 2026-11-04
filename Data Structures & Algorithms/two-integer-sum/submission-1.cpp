class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> rem;
        for(int i=0;i<nums.size();i++){
            if(rem.contains(target-nums[i])){
                return {rem[target-nums[i]],i};
            }
            rem[nums[i]]=i;
        }
        return {};
    }
};