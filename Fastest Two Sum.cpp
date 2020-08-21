class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    	unordered_map<int, int> map;
        for (int i=0; i<nums.size(); i++) {
            int compliment = target-nums[i];
            if (map.count(compliment)) {
                return {map[compliment],i};
            }
            map[nums[i]]=i;
        }
        return {};
    }
};
