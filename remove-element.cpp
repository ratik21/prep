class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int first = 0, last = nums.size() - 1, len = 0;
        while(first <= last){
            if(nums[first] == val){
                if(nums[last] != val){
                    swap(nums[first], nums[last]);
                    len++;
                    last--;
                }
            }else{
                first++;
            }
            
            if(nums[last] == val){
                len++;
                last--;
            }
        }
        return nums.size() - len;
    }
};

//better
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
      
     int i=0;   
     for(int j=0; j<nums.size(); j++){
         if(nums[j] != val){
             nums[i] = nums[j];
             i++;
         }
     }
    
     return i;
    }
};