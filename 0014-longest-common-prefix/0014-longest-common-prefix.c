char* longestCommonPrefix(char** strs, int strsSize) {

    char* dummy=strs[0];
    for(int i=1;i<strsSize;i++)
    {
        
        int j=0;
        while(dummy[j]!='\0' && strs[i][j]!='\0' && dummy[j]==strs[i][j])
        {
            
            j++;
        }
        dummy[j]='\0';
        if(dummy[0]=='\0')
        return dummy;
    }
    return dummy;


    
}