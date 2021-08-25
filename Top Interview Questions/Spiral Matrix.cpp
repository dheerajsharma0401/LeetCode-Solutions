class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        int top=0;
        int down=matrix.size()-1;
        int left=0;
        int right=matrix[0].size()-1;
        
        int d=0;
        vector<int> v;
      
        while(top<=down && left<=right)
        {
            if(d==0)
            {
                
                for(int i=left;i<=right;i++)
                {
                    v.push_back(matrix[top][i]);
                }
               top++;
                
                d++;
                d%=4;
                
            }
            else
                if(d==1)
                {
                    
                    for(int i=top;i<=down;i++)
                    {
                        v.push_back(matrix[i][right]);
                        
                    }
                    right--;
                    d++;
                    d%=4;
                    
                    
                }
            else
                
                if(d==2)
                {
                    
                    for(int i=right;i>=left;i--)
                    {
                        v.push_back(matrix[down][i]);
                    }
                    
                    d++;
                    d%=4;
                    down--;
                   
                }
            else
                if(d==3)
            {
               
                for(int i=down;i>=top;i--)
                {
                    v.push_back(matrix[i][left]);
                }
                    left++;
                    d++;
                    d%=4;
                   
                    
            }
            
            
        }
        return v;
        
    }
};
