//Using Map 
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        map<int, int> mp;
        for(int i=0; i<numbers.size(); i++){
            mp[ numbers[i] ] = i;
        }
        
        for(int i=0; i<numbers.size(); i++){
            if(mp.find( target - numbers[i] ) != mp.end() ){
                return {i+1, mp[target - numbers[i]] + 1};
            }
        }
        return {};
    }
};


//Binary Search
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
                
        for(int i=0; i<numbers.size(); i++){
            
           int first = i+1, last = numbers.size() - 1;  
           while(first < last){
               int mid = (first + last)/2;
        
               if(numbers[mid] >= target - numbers[i])
                   last = mid;
               else
                   first = mid + 1;
           }
           
           if(numbers[last] == target - numbers[i])
               return {i+1, first+1};
            
        }
        return {};
    }
};
