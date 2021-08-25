class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0;i<matrix.size();i++)
        {
            int flag=0;
            if(matrix[i][0]<=target && matrix[i][matrix[i].size()-1]>=target)
            {
                int j=0;
                while(flag==0 && j<matrix[i].size())
                {
                    if(matrix[i][j]==target)
                        return true;
                    else
                        if(matrix[i][j]>target)
                            flag=1;
                    j++;
                }
            }
           
        }
        return false;
        
    }
};