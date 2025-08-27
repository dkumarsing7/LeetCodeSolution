class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0, j = height.size()-1;
        int maxarea = 0;
        while(i!=j){
            int minimum = min(height[i], height[j]);
            int width = j-i;
            int area = minimum*width;
            maxarea = max(maxarea, area);
            if(height[i] < height[j]) i++;else j--; 
        }
        return maxarea;
    }
};  