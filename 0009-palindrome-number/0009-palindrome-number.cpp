class Solution {
public:
    bool isPalindrome(int x) {
       long long kq=0;
       int tam=x;
       while (x>0){
        int l = x%10;
        x/=10;
        kq=kq*10+l;
        l=0;
       }
       if (kq==tam){
        return true;
       }
       else{
        return false;
       }
    }
};
