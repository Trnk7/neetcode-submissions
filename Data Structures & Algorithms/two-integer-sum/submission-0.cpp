class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> rem;
        for(int i=0;i<nums.size();i++){
            if(rem.find(target-nums[i])!=rem.end()){
                return {rem[target-nums[i]],i};
            }else{
                rem[nums[i]]=i;
            }
        }
        return {0,0};
    }
};