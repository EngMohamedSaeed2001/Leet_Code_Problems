class Solution {
public:
     int fib(int n) {
        int fib[100];
        fib[n];
        fib[0]=0;
        fib[1]=1;

        for(int i=2;i<=n; i++){
            fib[i]=fib[i-2]+fib[i-1];
        }

        return fib[n];

    }
};