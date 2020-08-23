class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int indextoUpdate = 0, indexprocessed = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]){
                nums[indextoUpdate++], nums[i];
            }
        }
        for(int i=indextoUpdate; i<nums.size(); i++){
            nums[i] = 0;
        }
        
    }
};