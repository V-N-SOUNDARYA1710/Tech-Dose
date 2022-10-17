bool checkIfPangram(char * sentence){
 int res=0;
    int ans[26]={0};
    for(int i=0;i<strlen(sentence);i++){
        ans[sentence[i]-'a']++;
        if(ans[sentence[i]-'a']==1){
            res++;
        }
    }
    return res==26;
}
