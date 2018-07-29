#include<stdio.h>
int main()
{
    int i,x,factorial=1;
    scanf("%d",&x);
    if(x == 0){
        printf("1\n");
    }
    else{
        for(i =1;i <= x;i++){
        factorial = factorial * i;

    }
    printf("%d\n",factorial);
    }

}
