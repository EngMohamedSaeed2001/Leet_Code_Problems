class Solution {
    public int divide(int dividend, int divisor) {
         int res;
        String ss;
        if (divisor==-1 && (dividend<=Math.pow(-2,31))){
            divisor*=-1;
            res= (int) Long.divideUnsigned(dividend,divisor);
            ss=String.valueOf(res);
            String h=ss.replace("-","");
            if (Long.valueOf(h)==Math.pow(2,31)){
                res= (int) (Long.valueOf(h)-1);
            }else {
                res = (int) (Long.valueOf(h) - 1);
                res++;
            }


            // res=()dividend/(long long)divisor;
            return res;
        }
        res=dividend/divisor;
        return res;

    }
}