int maxDistance(int* colors, int colorsSize){
    int i;
    for(i=0;colors[i]==colors[colorsSize-1];i++)
    ;
        i=colorsSize-i-1;
    for(colorsSize--;colors[0]==colors[colorsSize];colorsSize--)
    ;
    return colorsSize>i?colorsSize:i;
}
/*
Input: colors = [1,8,3,8,3]
Output: 4
Explanation: In the above image, color 1 is blue, color 8 is yellow, and color 3 is green.
The furthest two houses with different colors are house 0 and house 4.
House 0 has color 1, and house 4 has color 3. The distance between them is abs(0 - 4) = 4.
*/
