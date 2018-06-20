#include<stdio.h>
int main()
{
    int i,size,j,even,odd;
    scanf("%d",&size);
    for(i= 1; i<=size;i++){
            scanf("%d",&j);
            if(j == 0){
                printf("NULL\n");
            }
           if(j > 0){
            if(j % 2 == 0){
                printf("EVEN POSITIVE\n");
            }
            else {
                printf("ODD POSITIVE\n");

            }
           }
           if( j < 0){
                 if(j % 2 == 0){
                printf("EVEN NEGATIVE\n");
            }
            else {
                printf("ODD NEGATIVE\n");

            }

           }


    }

}
