class Solution {
public:
    bool isAnagram(string s, string t) {

        vector<int> ans(26,0);

        int n = s.size(); 
        int m = t.size(); 

        if(n!=m)return false ; 

       for(int i=0; i<n ; i++){

        int index = s[i]-'a'; 

        ans[index]++; 
       }

       
       for(int i=0; i<n ; i++){

        int index = t[i]-'a'; 

        ans[index]--; 
       }

       for(int c :ans){
        if(c!=0)return false ; 
       }

       return true ; 


        
    }
};
