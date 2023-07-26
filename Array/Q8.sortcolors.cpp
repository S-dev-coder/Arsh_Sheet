Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]




// BRUTE FORCE SOLUTION 

class Solution {
public:
    void sortColors(std::vector<int>& nums) {
        int n = nums.size();
        int count0 = 0, count1 = 0, count2 = 0;
        
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                count0++;
            } else if (nums[i] == 1) {
                count1++;
            } else {
                count2++;
            }
        }
        
        for (int i = 0; i < count0; i++) {
            nums[i] = 0;
        }
        for (int i = count0; i < count0 + count1; i++) {
            nums[i] = 1;
        }
        for (int i = count0 + count1; i < n; i++) {
            nums[i] = 2;
        }
    }
};





// OPTIMAL SOLUTION 

class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int n=nums.size();
        int low=0,high=n-1;
        int mid=0;
        
        while(mid<=high){
           
            
         if(nums[mid]==0){
             swap(nums[low],nums[mid]);
             low++;
             mid++;
         }
            
            else if(nums[mid]==1)
            {
                mid++;
            }
            
         else
         {
             swap(nums[mid],nums[high]);
             high--;
         }
            
        }   
    }
};

