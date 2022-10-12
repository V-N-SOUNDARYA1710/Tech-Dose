/*Example 1:

example-1
Input: s = "1 box has 3 blue 4 red 6 green and 12 yellow marbles"
Output: true
Explanation: The numbers in s are: 1, 3, 4, 6, 12.
They are strictly increasing from left to right: 1 < 3 < 4 < 6 < 12.*/
bool areNumbersAscending(char * s){
    int i, j = -1;
    char *token = strtok(s, "abcdefghijklmnopqrstuvwxyz ");
    while(token){
        i = atoi(token);
        if(i <= j)
        {
            return 0;
        }
        j = i;
        token = strtok(NULL, "abcdefghijklmnopqrstuvwxyz ");
    }
    return 1;
}
