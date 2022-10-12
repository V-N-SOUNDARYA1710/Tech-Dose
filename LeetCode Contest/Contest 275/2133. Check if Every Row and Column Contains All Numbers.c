bool checkValid(int** matrix, int matrixSize, int* matrixColSize){
    int* count = (int*)calloc(matrixSize+1, sizeof(int));
    int counter = 1;
    for(int i=0;i<matrixSize;i++)
    {
        for(int j=0;j<matrixSize;j++)
        {
            count[matrix[i][j]]++;
            if(count[matrix[i][j]]>counter)
                return false;
        }
        counter++;
    }
    for(int i=0;i<matrixSize;i++)
    {
        for(int j=0;j<matrixSize;j++)
        {
            count[matrix[j][i]]++;
            if(count[matrix[j][i]]>counter)
                return false;
        }
        counter++;
    }
    return true;
}
