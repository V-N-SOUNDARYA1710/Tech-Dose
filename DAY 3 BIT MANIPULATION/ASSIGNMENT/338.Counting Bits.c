int* countBits(int n, int* returnSize){
    int *res = malloc(sizeof(int) * (n+1));
    for (int i = 0; i <= n; i++)
        res[i] = __builtin_popcount(i);
    *returnSize = n+1;
    return res;

}
