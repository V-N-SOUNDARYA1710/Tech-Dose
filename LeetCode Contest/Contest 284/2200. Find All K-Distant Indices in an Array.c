int max(int a, int b) 
{
  return a > b ? a : b;
}
int* findKDistantIndices(int* nums, int numsSize, int key, int k, int* returnSize) 
{

  *returnSize = 0;
  int *result = NULL;
  int n = 0;
  for (int i = 0, l = 0; i < numsSize; ++i) 
  {
    if (nums[i] == key) 
    {
      l = max(l, i - k);
      *returnSize += ((2 * k + 1) - (l > i - k ? (l - (i - k)) : 0) -
                      (i + k > numsSize - 1 ? i + k - (numsSize - 1) : 0));
      result = realloc(result, *returnSize * sizeof(*result));
      while (l < numsSize && l <= i + k) 
      {
        result[n++] = l++;
      }
    }
  }
                      
  return result;
}
