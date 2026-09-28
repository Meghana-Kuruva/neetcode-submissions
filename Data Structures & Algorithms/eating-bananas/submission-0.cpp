class Solution {
public:
    int calc(vector<int> &piles, int k){
        int hours =0; 
        for(int i=0; i<piles.size(); i++){
        int time = (piles[i] + k - 1) / k; 
            hours+=time; 
        }; 
        return hours; 
    }
    int minEatingSpeed(vector<int>& piles, int h) {

        int low=1; 
        int high = *max_element(piles.begin(), piles.end()); 
        int ans =-1; 

        while(low<=high){
            int mid = low+(high -low)/2; 
            int hours = calc(piles, mid); 
            if(hours<=h){
                ans = mid ; 
                high = mid-1; 
            }else {
                low = mid+1; 
            }
        }

        return ans ; 
        
    }
};
