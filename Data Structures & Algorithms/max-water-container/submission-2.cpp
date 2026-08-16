class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxi=INT_MIN;
        int n=heights.size();
        int i=0, j=n-1;
        while(i<j){
            maxi=max(maxi, (j-i)*min(heights[i], heights[j]));
            if(heights[i]>heights[j])j--;
            else i++;
        }
        return maxi;
    }
};
