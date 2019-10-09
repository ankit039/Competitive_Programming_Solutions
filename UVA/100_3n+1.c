#include<stdio.h>

int main(){

    unsigned long long int i, j, k=1, bk=0, m, n;
    unsigned long long int a, b, op;

    while(scanf("%llu %llu", &i, &j)==2){
        if(i>j){
            m=j;
            n=i;
        }
        else{
            m=i;
            n=j;
        }
        for(a=m; a<=n; a++){
            op=a;
            while(op>1){
                if(op%2!=0) op=3*op+1;
                else op/=2;
                k++;
            }
            if(k>bk) bk=k;
            k=1;
        }

    printf("%llu %llu %llu\n", i, j, bk);
    bk=0;

    }

    return 0;

}
