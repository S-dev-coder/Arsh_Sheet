given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements in nums.

Consider the number of unique elements of nums to be k, to get accepted, you need to do the following things:

Change the array nums such that the first k elements of nums contain the unique elements in the order they were present in nums initially. The remaining elements of nums are not important as well as the size of nums.
Return k.

// brute force solution 

 class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        
        if (n <= 1) {
            return n;
        }
        
        int k = 1; // Pointer for the next unique element
        
        for (int i = 1; i < n; i++) {
            if (nums[i] != nums[i - 1]) {
                nums[k] = nums[i];
                k++;
            }
        }
        
        return k;
    }
};



// optimal solution 

  class Solution {
public:
        int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,bool> M;
        int k=0;
            
        for(int i=0;i<n;i++){
            if(!M[nums[i]])
            {
                nums[k] = nums[i];
                k++;
                M[nums[i]]=true;
            }
        }
            return k;
        }
             
};


