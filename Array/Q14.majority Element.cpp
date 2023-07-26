Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

 

 // sc = tc = 0(n);
 class Solution {
public:
    int majorityElement(vector<int>& nums) {
   
        int n=nums.size();
        int k=n/2;
        int ans;
        unordered_map <int,int> M;
        for(int i=0;i<nums.size();i++){
            M[nums[i]]++;
        }
        
        for(int i=0;i<nums.size();i++){
            if(M[nums[i]] > k)
                ans=nums[i];
        }
        
        return ans;
        
    }
    
};