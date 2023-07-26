Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.



// brute force solution 
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        
        return {}; // No solution found
    }
};




// optimal solution

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     
        int diff;
        vector<int> V;
unordered_map<int, int> M;

for(int i=0;i<nums.size();i++){
diff=target-nums[i];
if(M.find(diff)!=M.end()){
V.push_back(M[diff]);
V.push_back(i);
return V;
}

M[nums[i]] = i;
}  
	return V;
}
 
};

