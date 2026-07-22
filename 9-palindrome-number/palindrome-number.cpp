class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }

        int original=x;
        long reversed=0;
        while(x>0){
            int lastdigit=x%10;//x me se last digit extract kra

            reversed=reversed*10+lastdigit; //extracted digit ko reversed me ghusa diya
            x=x/10;//us digit ko remove krdiya to prevent repitition


        }
         return original==reversed;//Agar reversed number original ke barabar hai, toh palindrome hai
        
    }
};