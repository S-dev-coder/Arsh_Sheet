You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return the maximum amount of water a container can store.

Notice that you may not slant the container.

 

 // brute force solution 


int maxAreaBruteForce(std::vector<int>& height) {
    int n = height.size();
    int maxArea = 0;

    // Check all possible pairs of lines
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int h = std::min(height[i], height[j]);
            int w = j - i;
            int area = h * w;
            maxArea = std::max(maxArea, area);
        }
    }

    return maxArea;
}


// optimal solution

class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int left=0;
        int right =height.size()-1;
         int maxxi=0;
        while(left<right){
        int length = min(height[left],height[right]);
        int breadth= right-left;
        int area= length * breadth;
       
        
     maxxi = max(area,maxxi);
        
        if(height[left]<height[right])
            left++;
            else
                right--;
        }  
        return maxxi; 
        
    }
};