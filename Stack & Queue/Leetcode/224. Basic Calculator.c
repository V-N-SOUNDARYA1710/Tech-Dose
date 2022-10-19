char *last;
int calculate(char * s)
{
    long sum = 0, sign = 1, temp = 0;
    for(;*s;s++)
        if(*s == '(') 
        {
            sum += (sign * calculate(s + 1));
            s = last;
        }
        else if(*s == ')')
        {
            last = s;
            break;
        }
        else if(*s == '+' || *s == '-') 
        {
            sum += (sign * temp);
            temp = 0;
            sign = -(*s - 44);
        }
        else if(*s >= '0' && *s <= '9')
            temp = 10 * temp + (*s - '0') ;
    
    return sum + sign * temp;
}
