class Solution {
    public int reverse(int x) {
        int res = 0;
        int xx=x;
        if(x<0){
            xx=Math.abs(x);
        }
        String s=String.valueOf(xx);
        StringBuilder ss= new StringBuilder();
        for (int i = s.length()-1; i >=0; i--) {
            if(s.charAt(i)!='-')
                ss.append(s.charAt(i));
        }

        if(x<0){
            ss= new StringBuilder("-" + ss);
        }

        long ress=Long.parseLong(String.valueOf(ss));

        if(ress>(Math.pow(2,31)-1)||ress<-(Math.pow(2,31))){
            return 0;
        }

        res= (int) ress;

        return res;
    }
}