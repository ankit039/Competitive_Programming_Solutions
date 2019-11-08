class Calculator implements AdvancedArithmetic {
    public int divisorSum(int n) {
        int sum=1;
    for(int i=2;i<=(n/2);i++){
        if(n%i==0)sum+=i;
    }
    if(n!=1)return sum+n;
    else return sum;
    }
}

