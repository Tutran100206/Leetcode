class Solution {
public:
    bool isPerfectSquare(int num) 
    {
        int k = sqrt(num);
        return num == pow(k, 2);    
    }
};