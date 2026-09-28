class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        /*if sorted 
     

        int n = nums.size(); 
        int i=0 ;
        int j= n-1 ; 

        while(i<j ){
            int sum = nums[i]+nums[j]; 

            if(sum==target){
                return {i, j}; 
            }
            else if(sum>target){
                j--; 
            }else {
                i++; 
            }
        }

        return {-1,-1} ; 

        */

        unordered_map <int, int> map ; 
        for(int i=0; i<nums.size();i++){
            int compliment = target - nums[i]; 

            if(map.find(compliment)!=map.end()){
                return {map[compliment], i}; 
            }

            map[nums[i]]=i ; 
        }

        return {}; 
    }
};
