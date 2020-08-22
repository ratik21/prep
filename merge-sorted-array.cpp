class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int i = 0, j = 0;
        vector<int> v;
        while(i < m || j < n){
            
            if(i < m && j >= n){
                v.push_back(nums1[i++]);
            }
            else if(i >= m && j < n){
                v.push_back(nums2[j++]);
            }
            else if(nums1[i] < nums2[j]){
                v.push_back(nums1[i++]);
            }else{
                v.push_back(nums2[j++]);
            }
        }
       
        nums1 = v;
    }
};