class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
         int n = nums.size(); 
        unordered_map <int, int> mp ; 

        for(int x:nums){
            mp[x]++; 
        }

        for(auto &x:mp){
            int first = x.first ; 
            int second = x.second ; 

            if(second>1){
                return true ; 
            }
        }

        return false; 
       
    }
};