#include<stdio.h>
int main()
{
    int x,y,i;
    scanf("%d",&x);
    for(i = 1; i <= x*4;i++){
        if(i % 4 == 0){
            printf("PUM\n");
            continue;

        }
        else {
            printf("%d ",i);
        }

    }
return 0;
}
