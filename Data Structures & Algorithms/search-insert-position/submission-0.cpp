
class Solution { 
public: 
    int searchInsert(vector<int>& nums, int target) { 
        // Lower bound = first index where nums[i] >= target
        
        int ans = nums.size(); 
        int low = 0; 
        int high = nums.size() - 1; 
        
        while(low <= high) { 
            int mid = low + (high - low) / 2; 
            
            if(nums[mid] >= target) { 
                ans = mid; 
                high = mid - 1;   // search left
            }
            else { 
                low = mid + 1;    // search right
            } 
        } 
        
        return ans; 
    } 
};

