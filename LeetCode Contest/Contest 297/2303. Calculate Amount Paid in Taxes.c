double calculateTax(int** brackets, int bracketsSize, int* bracketsColSize, int income)
{
     if(income == 0) return 0;
    
    int index = 0, preUpper = 0, ret = 0;
    double ans = 0, curr;
    
    while(index < bracketsSize && ret == 0)
    {
        if(brackets[index][0] > income)
        {
            ret = 1;
            curr = income - preUpper;
        }
        else
        {
            curr = brackets[index][0] - preUpper;
        }
        ans += curr * brackets[index][1] / 100;
        preUpper = brackets[index++][0];
    }
    return ans;
}
