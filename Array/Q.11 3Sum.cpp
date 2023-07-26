// Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

// Notice that the solution set must not contain duplicate triplets.

 

// brute force solution 

// #include <vector>
// #include <algorithm>

// vector<vector<int>> threeSumBruteForce(vector<int>& nums) {
//     std::vector<std::vector<int>> result;
//     int n = nums.size();

//     // Sort the array to handle duplicates
//     std::sort(nums.begin(), nums.end());

//     // Check all possible triplets
//     for (int i = 0; i < n - 2; i++) {
//         // Skip duplicates for the first element
//         if (i > 0 && nums[i] == nums[i - 1])
//             continue;

//         for (int j = i + 1; j < n - 1; j++) {
//             // Skip duplicates for the second element
//             if (j > i + 1 && nums[j] == nums[j - 1])
//                 continue;

//             for (int k = j + 1; k < n; k++) {
//                 // Skip duplicates for the third element
//                 if (k > j + 1 && nums[k] == nums[k - 1])
//                     continue;

//                 if (nums[i] + nums[j] + nums[k] == 0) {
//                     result.push_back({nums[i], nums[j], nums[k]});
//                 }
//             }
//         }
//     }

//     return result;
// }





// // optimal solution

// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         int n= nums.size();
//         int sum =0;
//         sort(nums.begin(), nums.end());
//     vector<vector<int>> result;
        
        
//     for (int i = 0; i < n - 2; i++) {
//         // Skip duplicates for the first element
//         if (i > 0 && nums[i] == nums[i - 1])
//             continue;

//         int left = i + 1;
//         int right = n - 1;

//         while (left < right) {
//             int sum = nums[i] + nums[left] + nums[right];

//             if (sum < 0) {
//                 left++;
//             } else if (sum > 0) {
//                 right--;
//             } else {
//                 result.push_back({nums[i], nums[left], nums[right]});

              
//                 while (left < right && nums[left] == nums[left + 1])
//                     left++;
//                 while (left < right && nums[right] == nums[right - 1])
//                     right--;

//                 left++;
//                 right--;
//             }
//         }
//     }

//     return result;
// }
// };