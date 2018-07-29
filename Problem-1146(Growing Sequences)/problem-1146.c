#include<stdio.h>
int main()
{
    int x,y,i,j;
    while(1){
        scanf("%d",&x);
        if(x == 0){
            break;
        }
        else if ( x!= 0){
            for( i = 1; i < x; i++){
                printf("%d ",i);
            }
            printf("%d\n",i);
        }
    }
    return 0;
}
