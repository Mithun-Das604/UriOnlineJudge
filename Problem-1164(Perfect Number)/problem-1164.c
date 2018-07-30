#include<stdio.h>
int main()
{
    int m,x,i,sum=0,j;
    scanf("%d",&x);
    for(i =1;i<=x;i++){
            scanf("%d",&m);
            sum =0;
            for(j = 1;j<m;j++){
                if(m % j ==0){
                    sum = sum + j;
                }
            }
            if(sum == m){
                printf("%d eh perfeito\n",m);
            }
            else if(sum !=m){
                printf("%d nao eh perfeito\n",m);
            }
    }
    return 0;
}
