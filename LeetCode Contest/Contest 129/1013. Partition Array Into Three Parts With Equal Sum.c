bool canThreePartsEqualSum(int* arr, int arrSize)
{
    int sum = 0;
    int idx = 0;
    int part[3] = {0};
    for (int i = 0; i < arrSize; i++) 
    {
        sum += arr[i];
    }
    if (sum % 3) 
    {
        return false;
    }
    sum /= 3;
    while (idx < arrSize) 
    {
        part[0] += arr[idx];
        idx++;
        if (part[0] == sum) 
        {
            break;
        }
    }
    if (idx == arrSize) 
    {
        return false;
    }
    while (idx < arrSize) 
    {
        part[1] += arr[idx];
        idx++;
        
        if (part[1] == sum) 
        {
            break;
        }
    }
    if (idx == arrSize) 
    {
        return false;
    }
    while (idx < arrSize) 
    {
        part[2] += arr[idx];
        idx++;
    }
    return (part[0] == part[1] && part[0] == part[2]);
}
