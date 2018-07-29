#include<stdio.h>
int main()
{
    int x,y,i,sum = 0;
    scanf("%d %d",&x,&y);

    if( y > 0){
        for(i = 1; i <= y;i++){
              sum = sum + x;
                x++;
            }
            printf("%d",sum);
    }
    else{
        while(y <=0){
        scanf("%d",&y);
        if(y > 0){
            for(i = 1; i <= y;i++){
              sum = sum + x;
                x++;
            }
            printf("%d\n",sum);

        }
     }
    }


}
