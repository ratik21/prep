class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int, int> mp;
        int n = nums.size();
        for(int i=0; i<n; i++){
           
            if(mp[ nums[i] ] ){
                if(abs((i+1) - mp[nums[i]]) <= k){
                    return true;
                }else{
                    mp[ nums[i] ] = i+1;
                }
            }
                        
            mp[ nums[i] ] = i+1;
        }
        return false;
    }
};