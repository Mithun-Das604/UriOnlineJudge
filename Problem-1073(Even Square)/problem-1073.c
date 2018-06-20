#include<stdio.h>
int main()
{

    int i,j;
    scanf("%d",&i);
    if(i > 5 && i < 2000){
        for(j= 1;j <= i;j++){
            if(j % 2 == 0){
                printf("%d^2 = %d\n",j,(j * j));
            }

        }
    }
}
