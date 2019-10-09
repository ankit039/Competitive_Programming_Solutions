class Solution {
    int res;
    HashMap<String,Boolean> map;
    int dp[][];
    public static void main(String []args){
      Solution s=new Solution();
      int len=s.longestPalindromeSubseq("cdbb");
    }
    public int longestPalindromeSubseq(String s) {
        if(s.length()==0)
            return 0;
        res=0;
        int n=s.length();
        dp=new int[n][n];
        return lps(s,0,s.length()-1); 
    }
    int lps(String s,int i,int j){
        if(i>j)return 0;
        if(dp[i][j]!=0){
            return dp[i][j];
        }
        if(i==j) dp[i][j]= 1;
        else if(s.charAt(i)==s.charAt(j)){
            dp[i][j]= 2+lps(s,i+1,j-1);
        }
        else dp[i][j]= Math.max(lps(s,i+1,j),lps(s,i,j-1));
        return dp[i][j];
    }
 
}
