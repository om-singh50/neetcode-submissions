class Solution {
public:
    long long possible(int speed, vector<int>& nums) {
        long long cnt = 0;

        for (int num : nums) {
            cnt += ((long long)num + speed - 1) / speed;
        }

        return cnt;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int sum=0;
        int maxi=INT_MIN;
        for(int i=0; i<n; i++){
            sum+=piles[i];
            maxi=max(maxi,piles[i]);
        }
        
        int low=1;
        int high=maxi;
        while(low<=high){
            int mid=(low+high)/2;

            if(possible(mid, piles)>h)low=mid+1;
            else {  
                high=mid-1;
            }
        }
    return low;
    }
};
