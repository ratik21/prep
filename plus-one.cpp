class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
       
        int digit = 0, carry = 1;
        
        for(int i=digits.size() - 1; i>=0 ; i--){
           if(digits[i] == 9 && carry == 1){
               digits[i] = 0;
           }else{
               if(carry == 1){
                   digits[i]++;
                   carry = 0;
               }
           }   
        }
        if(carry){
           vector<int> v;
           v.push_back(1);
            for(int i=0; i<digits.size(); i++){
                v.push_back(digits[i]);
            }
            return v;
        }
        return digits;
        
    }
};