class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int indextoupdate = 0;
        for(int i=0; i<nums.size(); ++i){
            if(!indextoupdate || nums[i] != nums[i-1]){
                nums[indextoupdate++] = nums[i];
            }
        }
        return indextoupdate;
    }
};