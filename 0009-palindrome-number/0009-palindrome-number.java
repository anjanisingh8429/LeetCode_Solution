class Solution {
    public boolean isPalindrome(int x) {
        int digit=0;
        int p;
        int reverse=0;
        p=x;
        while(x>0){
digit=x%10;
reverse=reverse*10+digit;
x=x/10;
        }
        if(p==reverse)
        return true;
        else
        return false;
    }
}