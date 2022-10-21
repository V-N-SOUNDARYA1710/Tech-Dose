int _cmp(const int** p, const int** q)
{
    const int* a = *p;
    const int* b = *q;
    int l = pow(a[0],2) + pow(a[1],2);
    int r = pow(b[0],2) + pow(b[1],2);
    return (l - r);
}
int** kClosest(int** points, int pointsSize, int* pointsColSize, int k, int* returnSize, int** returnColumnSizes)
{
    int** ret = malloc(k * sizeof(int*));
    *returnSize = k;
    *returnColumnSizes = malloc(k * sizeof(int));
    qsort(points, pointsSize, sizeof(points[0]), _cmp);
    for (int i = 0; i < k; i++)
    {
        ret[i] = malloc(2 * sizeof(int));
        (*returnColumnSizes)[i] = 2;
        ret[i][0] = points[i][0];
        ret[i][1] = points[i][1];
    }
    return ret;
}
