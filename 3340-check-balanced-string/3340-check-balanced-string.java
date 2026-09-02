class Solution {
    public boolean isBalanced(String num) {
        int even=0,odd=0;
        int i=0;
        while(i<num.length())
        {
            int num1=num.charAt(i)-'0';
            if(i%2==0)
            even+=num1;
            else
            odd+=num1;
            i++;
        }
        if(even==odd)
        return true;
        else
        return false;
    }
}