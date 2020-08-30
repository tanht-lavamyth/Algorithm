// Problem: https://leetcode.com/problems/subarray-sum-equals-k/

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> m;
    	m[0] = 1;

        int sequentialSum = 0, totalNumber = 0;
    	for (int i = 0; i < (int)nums.size(); ++i) {
            sequentialSum += nums[i];
    		if (m.count(sequentialSum - k) > 0) {
                totalNumber += m[sequentialSum - k];
    		}
    		m[sequentialSum] += 1;
    	}
        
        return totalNumber;
    }
};