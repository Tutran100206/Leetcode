class Solution {
public:
    bool isPerfectSquare(int num) 
    {
        double k = sqrt(num);
        return num == pow(int(k), 2);    
    }
};