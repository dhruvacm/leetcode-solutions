bool isPowerOfTwo(int n) {
    if(n<=0)
    return false;
    if(n==1)
      return true;
    int a=n;
    int b=n-1;
    if((a&b)==0)
      return true;
    else
      return false;  
    
}