Given an array nums of n integers, return an array of all the unique quadruplets [nums[a], nums[b], nums[c], nums[d]] such that:

0 <= a, b, c, d < n
a, b, c, and d are distinct.
nums[a] + nums[b] + nums[c] + nums[d] == target
You may return the answer in any order.

 

Example 1:

Input: nums = [1,0,-1,0,-2,2], target = 0
Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]


// brute force solution 

#include <vector>
#include <algorithm>

std::vector<std::vector<int>> fourSumBruteForce(std::vector<int>& nums, int target) {
    std::vector<std::vector<int>> result;
    int n = nums.size();

    // Sort the array to handle duplicates
    std::sort(nums.begin(), nums.end());

    // Check all possible quadruplets
    for (int a = 0; a < n - 3; a++) {
        // Skip duplicates for the first element
        if (a > 0 && nums[a] == nums[a - 1])
            continue;

        for (int b = a + 1; b < n - 2; b++) {
            // Skip duplicates for the second element
            if (b > a + 1 && nums[b] == nums[b - 1])
                continue;

            for (int c = b + 1; c < n - 1; c++) {
                // Skip duplicates for the third element
                if (c > b + 1 && nums[c] == nums[c - 1])
                    continue;

                for (int d = c + 1; d < n; d++) {
                    // Skip duplicates for the fourth element
                    if (d > c + 1 && nums[d] == nums[d - 1])
                        continue;

                    if (nums[a] + nums[b] + nums[c] + nums[d] == target) {
                        result.push_back({nums[a], nums[b], nums[c], nums[d]});
                    }
                }
            }
        }
    }

    return result;
}


// optimal solution 

  vector<vector<int>> result;
    int n = nums.size();

    // Sort the array
sort(nums.begin(), nums.end());

    for (int a = 0; a < n - 3; a++) {
        // Skip duplicates for the first element
        if (a > 0 && nums[a] == nums[a - 1])
            continue;

        for (int b = a + 1; b < n - 2; b++) {
            // Skip duplicates for the second element
            if (b > a + 1 && nums[b] == nums[b - 1])
                continue;

            int left = b + 1;
            int right = n - 1;
            int targetSum = target - nums[a] - nums[b];

            while (left < right) {
                int sum = nums[left] + nums[right];

                if (sum < targetSum) {
                    left++;
                } else if (sum > targetSum) {
                    right--;
                } else {
                    result.push_back({nums[a], nums[b], nums[left], nums[right]});

                    // Skip duplicates for the third and fourth elements
                    while (left < right && nums[left] == nums[left + 1])
                        left++;
                    while (left < right && nums[right] == nums[right - 1])
                        right--;

                    left++;
                    right--;
                }
            }
        }
    }

    return result;
}