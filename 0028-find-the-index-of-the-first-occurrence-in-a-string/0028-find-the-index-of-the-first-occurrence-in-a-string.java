class Solution {
    public int strStr(String h, String n) {
        int i=0;
        if(h.length()<n.length())
        return -1;
        while(i<h.length())
        {
            if(h.charAt(i)==n.charAt(0))
            {
                int index=0;
                int j=i;
                while(index<n.length() && j<h.length())
                {
                    if(h.charAt(j)!=n.charAt(index))
                    break;
                    j++;
                    index++;
                }
                if(index==n.length())
                return i;
            

            }
            i++;
        }
        return -1;
    }
}