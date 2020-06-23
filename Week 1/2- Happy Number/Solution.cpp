class Solution {
public:
    bool isHappy(int n) {
      int n1=n;
        int n2=n;
        do
        {
            n1=squaresum(n1);
            
            n2=squaresum(squaresum(n2));
        }
        while(n1!=n2);
            
        return (n1==1);
    }
    int squaresum(int n)
    {
        int sum=0;
        while(n)
        {
            sum+=(n%10)*(n%10);
            n/=10;
        }
        return sum;
        
    }
};
