class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int, int>>st;
        int n=temperatures.size();
        vector<int>ans;
        for(int i=n-1; i>=0; i--){
        while(!st.empty()&&st.top().first<=temperatures[i])st.pop();
            st.empty()?(ans.push_back(0)):(ans.push_back(st.top().second-i));
            st.push({temperatures[i], i});
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
