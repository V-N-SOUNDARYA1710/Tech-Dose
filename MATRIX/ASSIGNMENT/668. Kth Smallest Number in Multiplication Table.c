int count(int m, int n, int x)
{
    int count = 0;
    for(int i = 1; i <= m; i++)
        count += n < x/i ? n : x/i;
    return count;
}

int findKthNumber(int m, int n, int k)
{
    int start = 1, end = m * n + 1;
    while(start < end)
    {
        int mid = (start + end) / 2;
        if(count(m, n, mid) >= k)
            end = mid;
        else 
            start = mid + 1;
    }
    return start;
}
