bool isPalindrome(char* s) {
int i=0,j=0;
while(s[i]!='\0')
{
    if(isalnum(s[i]))
    {
        s[j]=tolower(s[i]);
        j++;
    }
    i++;
}
s[j]='\0';
int l=0,r=j-1;
while(l<r)
{
    if(s[l]!=s[r])
    {
        return false;

    }
    l++;
    r--;
    
}
return true;

    
}