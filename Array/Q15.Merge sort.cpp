
// You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

// Merge nums1 and nums2 into a single array sorted in non-decreasing order.

// The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.


// Therefore, the overall time complexity of the function is O((m + n)log(m + n)).
// Space Complexity: the space complexity is O(1).
// void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         for(int i=m;i<m+n;i++)
//         {
//             nums1[i]=nums2[i-m];
//         }

//         sort(nums1.begin(),nums1.end());
//     }




//  //   algorithm that runs in O(m + n) time .

//  void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//     int p1 = m - 1;  // Pointer for the last element of nums1
//     int p2 = n - 1;  // Pointer for the last element of nums2
//     int p = m + n - 1;  // Pointer for the last position of the merged array

//     while (p1 >= 0 && p2 >= 0) {
//         if (nums1[p1] > nums2[p2]) {
//             nums1[p] = nums1[p1];
//             p1--;
//         } else {
//             nums1[p] = nums2[p2];
//             p2--;
//         }
//         p--;
//     }

//     // If there are any remaining elements in nums2
//     while (p2 >= 0) {
//         nums1[p] = nums2[p2];
//         p2--;
//         p--;
//     }
// }


