// O(n) space
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> mp;
        int n = nums.size();
        
        for(int i=0; i<n; i++){
            mp[ nums[i] ]++;
            if(mp[ nums[i] ] > n/2)
                return nums[i];
        }
        return 0;
    }
};


// O(1) space -> using cnt +1/-1 {best solution}
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> mp;
        int n = nums.size();
        int val = 0, cnt = 0;
        
        for(int i=0; i<n; i++){
            if(!cnt) val = nums[i];
            
            if(nums[i] == val){
                cnt += 1;
            }else{
                cnt += -1;
            }
        }
        return val;
    }
};