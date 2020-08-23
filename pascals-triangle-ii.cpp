class Solution {
public:
    vector<int> getRow(int numRows) {
        if(numRows == 0)
            return {1};
        if(numRows == 1)
            return {1,1};
        else{
            vector< vector<int> > v = { {1}, {1,1} };
            
            for(int index = 2; index < numRows + 1; index++){
                vector<int> temp;
                for(int j=0; j<v[index-1].size(); j++){
                    if(j == 0){
                        temp.push_back(v[index-1][j]);
                    }else{
                        temp.push_back(v[index-1][j - 1] + v[index-1][j]);
                    }
                    if(j == v[index-1].size() - 1){
                        temp.push_back(v[index-1][j]);
                    }
                }
                v.push_back(temp);
            }
            
            return v[numRows];
        }
        
        return {};
    }
};