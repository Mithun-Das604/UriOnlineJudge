#include<stdio.h>
int main()
{
    int N[20],i,j,temp[20];
    for(i =0;i< 20 ;i++){
        scanf("%d",&N[i]);
    }
    for(i=19,j=0;i<=0;i--,j++){
        temp[i] = N[j];
    }
    for(i=0,j=19;i<20;i++,j--){
        printf("N[%d] = %d\n",i,N[j]);
    }
    return 0;
}
