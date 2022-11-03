bool start_with(int r,int c,char** board, int boardSize, int* boardColSize, char * word){
    if(strlen(word)==0)
        return true;
    if(r<0 || r>=boardSize)
        return false;
    if(c<0 || c>=boardColSize[0])
        return false;
    if(board[r][c]!=word[0])
        return false;
    bool res;
    char old=word[0];
    board[r][c]='_' ; 
    if(start_with(r-1,c,board,boardSize,boardColSize,&word[1]))
        return true;
    if(start_with(r+1,c,board,boardSize,boardColSize,&word[1]))
        return true;
    if(start_with(r,c-1,board,boardSize,boardColSize,&word[1]))
        return true;
    if(start_with(r,c+1,board,boardSize,boardColSize,&word[1]))
        return true;
    board[r][c]=old;
        
    return false;
}
bool exist(char** board,int boardSize,int* boardColSize,char *word)
{
    int r,c;
    for(r=0;r<boardSize;r++)
    {
        for(c=0;c<boardColSize[0];c++)
        {
            if(start_with(r,c,board,boardSize,boardColSize,word))
                return true;
        } 
    }
    return false;
}

