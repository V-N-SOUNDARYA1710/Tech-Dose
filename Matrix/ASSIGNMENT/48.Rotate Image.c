void rotate(int** matrix, int matrixSize, int* matrixColSize)
{
    for(int row=0;row<matrixSize;row++)
    {
        for(int col=row;col<matrixSize;col++)
        {
            int temp=matrix[row][col];
            matrix[row][col]=matrix[col][row];
            matrix[col][row]=temp;
        }
    }
    for(int row=0;row<matrixSize;row++)
    {
        int start=0;
        int end=matrixSize-1;
        while(start<end)
        {
            int temp=matrix[row][start];
            matrix[row][start]=matrix[row][end];
            matrix[row][end]=temp;
            start++;
            end--;
        }
    }
}
