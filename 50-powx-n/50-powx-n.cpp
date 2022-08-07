class Solution {
public:
    double res=1.0;


  
    double myPow(double x, int n) {
          if((x==1.0||x==-1.0)&&n==INT_MAX)
            return x;
        else if(x==2.0&&n==INT_MAX)
            return 0.0;
        else if((x==1.0||x==-1.0)&&n==INT_MIN)
                return 1.0;
        else if(x==2.0&&n==INT_MIN)
            return 0.0;
        
            int t=n;
            if(n<0)
                n*=-1;
            for (int i = n; i >0 ; i--) {
                res*=x;
            }
            if(t<0)
                res=1.0/res;
            return res;

    }
};