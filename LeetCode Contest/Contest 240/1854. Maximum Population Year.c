int maximumPopulation(int** logs, int logsSize, int* logsColSize)
{
     int map[101] = {0};
     for (int i = 0; i < logsSize; i++) 
     {
        map[logs[i][0] - 1950]++;
        map[logs[i][1] - 1950]--;
    }
    int sum = map[0], max = map[0], year = 0;
    for (int i = 1; i < 101; i++) 
    {
        sum += map[i];
        if (sum > max) 
        {
            max = sum;
            year = i + 1950;
        }
    }
    return year == 0 ? 1950 : year;
}
