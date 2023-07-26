Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

There is only one repeated number in nums, return this repeated number.

You must solve the problem without modifying the array nums and uses only constant extra space.


// Brute force solution 
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] == nums[j]) {
                    return nums[i];
                }
            }
        }
        
        return -1; // No duplicate found
    }
};

// optimal solution 
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> M;
        int ans;
        for(int i=0;i<nums.size();i++){
            M[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++){
          if(M[nums[i]]>1)
              ans= nums[i];
        }
        return ans;
    }
};