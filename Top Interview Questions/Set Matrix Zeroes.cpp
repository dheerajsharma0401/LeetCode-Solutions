

void setZeroes(int** matrix, int matrixSize, int* matrixColSize){
    //printf("%d, %d",*matrixColSize,matrixSize);
    int flag[matrixSize][*matrixColSize];

memset( flag, 0, matrixSize*(*matrixColSize)*sizeof(int) );
    
    for(int i=0;i<matrixSize;i++)
    {
        for(int j=0;j<matrixColSize[0];j++)
        {
            if(matrix[i][j]==0)
                flag[i][j]=1;

        }
    }
    
    for(int i=0;i<matrixSize;i++)
    {
        for(int j=0;j<matrixColSize[0];j++)
        {
            
               if(flag[i][j]==1)
               {
                    for(int k=0;k<matrixColSize[0];k++)
                   {
                       matrix[i][k]=0;
                   
                   }
                   for(int p=0;p<(matrixSize);p++)
                   {
                       matrix[p][j]=0;
                      
                   }
               }

        }
    }
    
    
}