Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears once or twice, return an array of all the integers that appears twice.

You must write an algorithm that runs in O(n) time and uses only constant extra space.

 

Example 1:

Input: nums = [4,3,2,7,8,2,3,1]
Output: [2,3]


// brute force solution 

vector<int> findDuplicates(std::vector<int>& nums) {
    std::vector<int> duplicates;

    // Iterate over each number in the array
    for (int i = 0; i < nums.size(); i++) {
        // Check if the number appears again in the array
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] == nums[j]) {
                // Number appears twice, add it to duplicates
                duplicates.push_back(nums[i]);
                break;  // Move to the next number
            }
        }
    }

    return duplicates;
}
















// optimal solution 

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int> M;
        vector<int> V;
        
    for(int i=0;i<nums.size();i++){
        M[nums[i]]++;
    }
        
    for(int i=0;i<nums.size();i++){
        if(M[nums[i]]>=2){
            V.push_back(nums[i]);
            M[nums[i]]=0;
        }
              
    }
        return V;  
    }
    
};