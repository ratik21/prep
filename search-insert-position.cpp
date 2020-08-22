class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int index;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == target)
                index = i;
            else{
                if(i > 0 && target > nums[i-1] && target < nums[i]){
                    index = i;
                }
                if(i == 0 && target < nums[i]){
                    index = 0;
                }
                if(i == nums.size() - 1 && target > nums[nums.size()-1]){
                    index = nums.size();
                }
            }
        }
        return index;
    }
    
    
};


// O( logn )

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
             
        int first = 0, last = nums.size() - 1, mid;
        
        while(first < last){
            mid = (first + last)/2;
            cout<<"first "<<first<<" last "<<last<<" mid "<<mid<<"\n";
          
            if(target <= nums[mid]){
                last = mid;      
            }
            else{
                first = mid + 1;
            }
        }
        
        if(target > nums[nums.size()-1]){
            first = nums.size();
        }
        
        return first;
        
    }
  
};