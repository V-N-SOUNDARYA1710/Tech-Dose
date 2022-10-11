int* spiralOrder(int** matrix, int matrixSize, int* matrixColSize, int* returnSize)
{
    int * result = (int *)malloc(matrixSize*(*matrixColSize)*sizeof(int));
    int left = 0, right = *matrixColSize-1, up = 0, down = matrixSize-1, index = 0;
    while(left <= right && up <= down)
    {
        for(int i=left; i<=right; i++)
        {
            result[index++] = matrix[up][i];
        }
        for(int i=up+1; i<=down; i++)
        {
            result[index++] = matrix[i][right]; 
        }
        for(int i=right-1; i>left && up != down; i--)
        {
            result[index++] = matrix[down][i];
        }
        for(int i=down; i>up && left != right; i--)
        {
            result[index++] = matrix[i][left];
        }
        up++; down--; left++; right--;
    }
    *returnSize = index;
    return result;
}
