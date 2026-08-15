class Solution {
public:
    vector<int> nse(vector<int>& nums){
        int n=nums.size();
        int i=n-1;
        stack<int> st;
        vector<int> v;
    
        while(i>=0){
            while(!st.empty()&&nums[st.top()]>=nums[i])st.pop();
            st.empty()?v.push_back(n-1):v.push_back(st.top()-1);
            st.push(i);

            i--;
        }
        reverse(v.begin(), v.end());
        return v;
    }
    vector<int> pse(vector<int>& nums){
        int n=nums.size();
        int i=0;
        stack<int> st;
        vector<int> v;
    
        while(i<n){
            while(!st.empty()&&nums[st.top()]>=nums[i])st.pop();
            st.empty()?v.push_back(0):v.push_back(st.top()+1);
            st.push(i);

            i++;
        }
        return v;
    }
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int> nseArr=nse(heights);
        vector<int> pseArr=pse(heights);
        int maxi=INT_MIN;
        for(int i=0; i<n; i++){
            int width=nseArr[i]-pseArr[i]+1;
            maxi=max(maxi, width*heights[i]);
        }
        return maxi;
    }
};
