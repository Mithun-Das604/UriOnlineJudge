#include<stdio.h>
int main()
{
    double array[6];
    int count=0,i;
    for(i = 0;i <6; i++){
        scanf("%lf",&array[i]);
    }
    for(i = 0; i< 6 ;i++){
        if(array[i]> 0){

            count++;
        }
    }
    printf("%d valores positivos\n%",count);
}
