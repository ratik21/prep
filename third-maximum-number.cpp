class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long firstmax = -1e12, secondmax = -1e12, thirdmax = -1e12;
        for(int i=0; i<nums.size(); i++){
            
            if(nums[i] > firstmax){
                swap(secondmax, thirdmax);
                swap(firstmax, secondmax);
                firstmax = nums[i];
            }
            if(nums[i] < firstmax && nums[i] > secondmax){
                swap(secondmax, thirdmax);
                secondmax = nums[i];
            }
            if(nums[i] < secondmax && nums[i] > thirdmax){
                thirdmax = nums[i];
            }
           
        }
        if(thirdmax == -1e12){
            return firstmax;
        }else{
            return thirdmax;
        }
    }
};