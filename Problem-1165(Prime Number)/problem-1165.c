#include<stdio.h>
int main()
{
    int x,n,m,i,j;
    scanf("%d",&n);
    for(x = 1; x <= n;x++){
        scanf("%d",&m);
        j=0;
    if(m == 1){
         printf("%d nao eh primo\n",m);
    }
    else if(m == 2){
        printf("%d eh primo\n",m);
    }
    else{
        for(i =2; i<m;i++){
            if(m % i ==0){
                    j=1;

            }



        }

        if(j == 1){
                printf("%d nao eh primo\n",m);
            }
            else if(j == 0){
                printf("%d eh primo\n",m);
            }
    }
    }
    return 0;
}
