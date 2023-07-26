// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

// Note that you must do this in-place without making a copy of the array.

 

// Example 1:

// Input: nums = [0,1,0,3,12]
// Output: [1,3,12,0,0]
// Example 2:

// Input: nums = [0]
// Output: [0]



class Solution {
public:
    
    // BRUTE FORCE 
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int index=0;
        vector<int> result(n,0);
        
        for(int i=0;i<n;i++){
            if(nums[i]!=0)
                result[index++]=nums[i];
        }
        
        nums=result;
    }
    
    

    // OPTIMAL SOLUTION 

    void moveZeroes(vector<int>& nums) {
          int n=nums.size();
        int index=0;
    
        for(int i=0;i<n;i++){
            if(nums[i]!=0)
                nums[index++]=nums[i];
        }
        while(index<n){
            nums[index++]=0;
        }
    }
};

