int* decode(int* encoded, int encodedSize, int first, int* returnSize)
{
     int * solution = (int *) malloc(sizeof(int) * (encodedSize+1));
    *returnSize = (encodedSize+1);
    solution[0] = first;
    for(int i = 0; i < encodedSize; i++)
    {
        solution[i+1] = solution[i] ^ encoded[i];
    }
    return solution;
}
