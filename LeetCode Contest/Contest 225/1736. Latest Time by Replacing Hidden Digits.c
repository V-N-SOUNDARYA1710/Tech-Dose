char * maximumTime(char * time)
{
    for (int i = 0; time[i] != '\0'; i++) {
        if (i == 0 && time[i] == '?') {
            if (time[i+1] == '1' || time[i+1] == '2' || time[i+1] == '3' || time[i+1] == '0' || time[i+1] == '?')
                time[i] = '2';
            else 
                time[i] = '1';
        }
        else if (i == 1 && time[i] == '?') {
            if (time[i-1] == '2')
                time[i] = '3';
            else
                time[i] = '9';
        }
        else if (i == 3 && time[i] == '?')
            time[i] = '5';
        else if (i == 4 && time[i] == '?')
            time[i] = '9';
    }
    return time;   
}
