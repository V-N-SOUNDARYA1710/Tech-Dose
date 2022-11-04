typedef struct
{
    int val;
    int count;
}Node;

int cmp(const void *a, const void *b)
{
    return ((Node *)b)->count - ((Node *)a)->count;
}
int* topKFrequent(int* nums, int numsSize, int k, int* returnSize){
    int * result = (int *)malloc(numsSize*sizeof(int));
    Node * node = (Node *)calloc(20000, sizeof(Node));
    int length = 0;
    for(int i = 0; i < numsSize; i++)
    {
        node[nums[i] + 10000].count += 1;
        node[nums[i] + 10000].val = nums[i];
    }
    qsort(node, 20000, sizeof(Node), cmp);
    for(int i = 0; i < k; i++)
        result[length++] = node[i].val;
    *returnSize = length;
    return result;
}
